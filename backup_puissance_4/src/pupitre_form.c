#include <stdio.h>
#include <ncurses.h>
#include <unistd.h>


#define WINDOW stdscr

int jetonPos;
int Joueur;
int ligne;
int colonne;
int i;
int j;
int k;
int col;
int lig;
extern int launch;
int c;
int cpt=0;

void print_grille(int posx, int posy);
void print_jeton(int posx,int posy,int place,int joueur);



void pupitre ()
{
 initscr(); /* init de ncurses */
    clear();
    noecho();   /* pour masquer l'affichage du buffer stdin dans la console */
    cbreak();    /* Line buffering disabled. pass on everything */

    print_grille(4, 25);

    print_jeton(4,25,jetonPos,Joueur);

    mvprintw(0, 0, "commencez à jouer !!");
    refresh();

    scrollok(WINDOW, TRUE);
    nodelay(WINDOW, TRUE);
    while(1)
    {    c = wgetch(WINDOW);
        cpt++;
        sleep(0.1);
        fflush(stdin);
        mvprintw(14, 2, "la valeur est %d",c);
        mvprintw(15, 2, " %d",cpt);


        switch(c)
        {    case KEY_UP:

                break;
            case KEY_DOWN:

                break;
            case KEY_ENTER:   //enter

                break;
            case 67:
                if(jetonPos>1)jetonPos--;
                else jetonPos = 7;
                print_jeton(4,25,jetonPos,Joueur);
                break;
            case 68:
                if(jetonPos<7)jetonPos++;
                else jetonPos = 1;
                print_jeton(4,25,jetonPos,Joueur);
                break;

            default:
                mvprintw(24, 0, "Charcter pressed is = %3d Hopefully it can be printed as '%c'", c, c);
                refresh();
                break;

        }
    }
}
