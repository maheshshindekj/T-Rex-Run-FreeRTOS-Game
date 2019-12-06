/*
 * TREX.h
 *
 *  Created on: Nov 26, 2019
 *      Author: Mahesh Mohan Shinde
 */

#ifndef TREX_HPP_
#define TREX_HPP_

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

void generate_obstacle_task(void *p);

void pin_config(void);

void CLK_HIGH(void); // Setting of CLK High (P2.7)

void CLK_LOW(void); // Setting of CLK Low (P2.7)

void setEn(bool en_val); // setting of OE Signal (P2.9)

void setLatch(bool lt_val); // Setting of LAT Signal (P2.1)

void selRow(uint8_t row);

void sample_display(void);

void display_task(void *p);

void obstacle_display_task(void *p);

void buttonpress(void *p);

void make_it_hop(void *p);

void collision_detection();

void drawdino();

void cleardino();

void hopdino();

void clearhopdino();

void drawPixel(uint8_t x, uint8_t y, uint8_t c);

void displayNumber(uint8_t row, uint8_t col, uint8_t number);

void displayScore();

void sample_display_1(void);

#endif /* TREX_HPP_ */



