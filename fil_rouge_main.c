/*
 * fil_rouge_main.c
 *
 *  Created on: 15 avr. 2019
 *      Author: daugustin
 */
#include<stdio.h>
#include<stdint.h>
#include "panneau_led.h"
#include "pupitre.h"

int main()
{
	while(1)
	{
	pupitre();
	panneau_led();
	}
	return 0;
}
