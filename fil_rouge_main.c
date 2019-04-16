/*
 * fil_rouge_main.c
 *
 *  Created on: 15 avr. 2019
 *      Author: daugustin
 */


#include<stdio.h>
#include<stdint.h>
#include<stdbool.h>

bool win_jaune = false;

int start = 0;
int dep_g = 0;
int dep_d = 0;
int launch = 0;

int main()
{

	 int verif_start()
	 {
		 if (start==1)
			 return 1;
	 }
	 int verif_dep_g()
	 {
		 if (dep_g==1)
			 return 1;
	 }
	 int verif_dep_d()
	 {
		 if (dep_d ==1)
			 return 1;
	 }
	 int launch()
	 {
		 if (launch == 1)
			 return 1;
	 }

	 /*	int verif_win()
	{
		//Verification si 4 en ligne dans les colonnes
		if(([colonne][ligne]== jaune)&&([colonne][ligne+1]==jaune)&&([colonne][ligne+2]==jaune)&&([colonne][ligne+3]==jaune))
			return win_jaune=true;

		//Verification si 4 en ligne dans les lignes
		if(([colonne][ligne]== jaune)&&([colonne+1][ligne]==jaune)&&([colonne+2][ligne]==jaune)&&([colonne+3][ligne]==jaune))
			return win_jaune=true;

		//Vérication si 4 en ligne en diag
		if(([colonne][ligne]== jaune)&&([colonne+1][ligne+1]==jaune)&&([colonne+2][ligne+2]==jaune)&&([colonne+3][ligne+3]==jaune))
					return win_jaune=true;

	}	*/
}
