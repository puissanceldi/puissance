/*
*****************************************************************************

  File        : main.cpp

  The MIT License (MIT)
  Copyright (c) 2019 STMicroelectronics

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.

*****************************************************************************
*/

#include<stdio.h>

int position_ligne_départ;

void position_finale(position_ligne_départ, numero_ligne)
{
	int x;
	int y;
	x = position_ligne_départ;
	y = numero_ligne;
	printf("le jeton sera positionné sur la colonne %d\n", x);
	printf("le jeton sera positionné sur la ligne %d\n", y);
}

int main(void){

	if (start == 1)
	{
		//placement jeton de départ
		position_ligne_depart = 4;
		printf("%d", position_ligne_depart);
	}
	if (dep_g == 1)
	{
		//déplacement du jeton à gauche
		position_ligne_depart -= 1;
		printf("%d", position_ligne_depart);
	}
	if (dep_d == 1)
	{
		//déplacement du jeton à droite
		position_ligne_depart += 1;
		printf("%d", position_ligne_depart);
	}
	if (lauch == 1)
	{
		//appel de la fonction position_finale
		position_finale(position_ligne_départ, numero_ligne);
	}
	return 0;
}
