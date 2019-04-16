#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int pupitre(char);
int autolaunch(int);
int dep_d = 0;
int dep_g = 0;
int launch = 0;
int start = 0;
int stop = 0;
int temps = 0;

int main()
{
char bouton;

	printf("Entrez votre choix : \n");
	scanf ("%c",&bouton);

	pupitre(bouton);

		if (dep_d == 1)
		{
			printf("droite\n");
			printf("\n%d\n",dep_d);
		}

		if (start == 1)
		{
			printf("partie commence \n");
			printf("\n %d \n",start);
		}
		if (dep_g == 1)
		{
			printf("gauche \n");
			printf("\n %d \n",dep_g);
		}
		if (launch == 1)
		{
			printf("lâcher \n");
			printf("\n %d \n",launch);
		}
		if (stop == 1)
		{
			printf("STOP \n");
			printf("\n %d \n",stop);
		}





return 0;
}

int pupitre(char choix)
{
	switch (choix)
	{
	case 's':
		start = 1;
		return start;
		break;

	case 'e':
		stop = 1;
		return stop;
		break;

	case 'd':
		dep_d = 1;
		return dep_d;
		break;

	case 'g':
		dep_g = 1;
		return dep_g;
		break;

	case 'b':
		launch = 1;
		return launch;
		break;


	}
}
/*int autolaunch(float temps)
{
	if (dep_d = 1 || dep_g = 1)
		{
			clock_tauto = clock() + (temps*CLOCKS_PER_SEC);

		}



}*/






