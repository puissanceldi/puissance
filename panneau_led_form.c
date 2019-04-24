#include <stdio.h>
#include <ncurses.h>
#include <unistd.h>
#include <pthread.h>

int jetonPos = 4;
int Joueur =1;

int  toggle;

void *threadled(void *arg)

{

	toggle =0;

	 initscr(); /* init de ncurses */
	    clear();
	    noecho();   /* pour masquer l'affichage du buffer stdin dans la console */
	    cbreak();    /* Line buffering disabled. pass on everything */
	    mvprintw(0, 0, "commencez à jouer !!");
	    refresh();
	    sleep(0.5);

while(1)
{
	sleep(1);
	print_grille(4, 25);
	print_jeton(4,25,jetonPos,Joueur);
}
    (void) arg;

    pthread_exit(NULL);

}


void print_grille(int posx, int posy)
{
	int lignes=0;
	mvprintw(posx+lignes, posy, "| | | | | | | |");
	mvprintw(posx+lignes+1, posy, "               ");
	while(lignes+2 < 8)
	{
		mvprintw(posx+lignes+2, posy, "| | | | | | | |");
		lignes++;
	}
}

void print_jeton(int posx,int posy,int place,int joueur)
{
	mvprintw(posx, posy, "| | | | | | | |");
	if (joueur == 1)
	{
	if(toggle==0)
	{
	mvprintw(posx, posy+(place*2-1), "X");
	toggle =1;
	}
	else
	{
	mvprintw(posx, posy+(place*2-1), " ");
	toggle =0;
	}
	refresh();


	}
	else
	{
	mvprintw(posx, posy+(place*2-1), "O");
	refresh();

	}




}

/*void position_finale (int colonne)
{
	int grille[7][7];
	char col = colonne;
	int lig = 6; //initialisation au numéro de ligne la plus basse;


	//calcul de la ligne
	for (lig=6; lig>0; lig--)
	{
		if (grille[lig][col] != 'O')
		{
			grille[lig][col] = 'O';
			break;
		}
	}
}*/

