/*
 * main.c
 *
 *  Created on: Dec 7, 2019
 *      Author: Veli Bayar
 */

#if NOLIB

#include "gpio.h"
#include "uart.h"

#endif

int main(void)
{
	int testVar = 1;

#if NOLIB
	testVar = gpio_init(testVar);
	testVar = uart_init(testVar);
#endif

	return 0;
}

