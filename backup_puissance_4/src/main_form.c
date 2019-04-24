#include<stdio.h>
#include<stdint.h>
#include "panneau_led_form.h"
#include "pupitre_form.h"


int main()
{

	while(1)
	{
	int jetonPos = 4;
	int Joueur =1;
	pupitre();
	print_grille(4, 25);
	print_jeton(4,25,jetonPos,Joueur);
	//position_finale (0);
	}
	return 0;
}
