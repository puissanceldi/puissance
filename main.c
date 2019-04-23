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

char grille[7][7];//grille[ligne][colonne]
int col; //numero de colonne
int lig; //numero de ligne

int main()
{

	//intialisation de la grille vide
	for (lig=0; lig<7; lig++)
	{
		printf("\n");
		for (col = 0; col < 7; col++)
		{
			grille[lig][col] = '~';
			printf("%c", grille[lig][col]);
		}
	}

	while(1)
	{

	pupitre();
	panneau_led();
	}
	return 0;
}
