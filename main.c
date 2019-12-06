/*
 * main.c
 *
 *  Created on: Nov 26, 2019
 *      Author: Mahesh Mohan Shinde
 */

#include "FreeRTOS.h"
#include "board_io.h"
#include "common_macros.h"
#include "delay.h"
#include "gpio.h"
#include "semphr.h"
#include "stdbool.h"
#include "task.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "trex.hpp"


int main(void) {
  pin_config();
  for (uint16_t i = 0; i < 5400; i++) {
    sample_display_1();
  }
  hop = xSemaphoreCreateBinary();
  time_start = xTaskGetTickCount();

  // light up base (bottome 3 rows) in blue
  for (uint8_t col = 0; col < 32; col++) {
    obstacle_buf[29][col] = 8; // row 29 blue
    obstacle_buf[30][col] = 8; // row 30 blue
    obstacle_buf[31][col] = 8; // row 31 blue
  }
  // generateObstacle();
  // xTaskCreate(sample_display_1, "start screen", 512, NULL, 2, NULL);
  xTaskCreate(drawdino, "input_button_to_hop", 512, NULL, 1, NULL);
  xTaskCreate(generate_obstacle_task, "Obstacle", 2048U, NULL, 1, NULL);
  xTaskCreate(display_task, "Display", 2048U, NULL, 2, NULL);
  xTaskCreate(obstacle_display_task, "Obstacle Display", 2048U, NULL, 2, NULL);
  xTaskCreate(make_it_hop, "dino_hop", 2048U, NULL, 1, NULL);
  xTaskCreate(buttonpress, "jump", 2048U, NULL, 1, NULL);
  xTaskCreate(collision_detection, "Collision_Detection", 2048U, NULL, 1, NULL);
  // xTaskCreate(displayScore, "Score", 2048U, NULL, 1, NULL);

  vTaskStartScheduler();

  return 0;
}
