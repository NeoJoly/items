#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <locale.h>

void color(int couleurtexte, int couleurfond) {
  HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(H,couleurfond*16+couleurtexte);
}

// pense-bête couleurs
/*      0: noir
        1: bleu foncé
        2: vert
        3: bleu-gris
        4: marron
        5: pourpre
        6: kaki
        7: gris clair
        8: gris
        9: bleu
        10: vert fluo
        11: turquoise
        12: rouge
        13: rose
        14: jaune
        15: blanc          */

int main() {

  char nom[100];
  int bombe = 5;
  int fleche = 3;
  int lance = 5;
  int corde = 10;
  int argent = 500;
  int choixpos;
  int choixitem;
  int nombreitem;
  int cout;



  // choix du nom
  printf("\n\n");
  color(9, 0);
  printf("Comment vous appelez-vous ?  ");
  scanf("%s", nom);
  printf("\n\n");
  if (strcmp( nom, " ") == 0) {
    strcpy(nom,"voyageur");
  }
  color(15, 0);

  // délai
  Sleep(1000);

  // mise en situation
  color(12, 0);
  printf("Marchand : Bonjour %s, bienvenue dans mon magasin !\n\n", nom);
  Sleep(2000);
  color(10, 0);
  printf("Argent disponible : %d$\n\n", argent);
  color(15, 0);
  Sleep(2000);



  // présentation des items
  color(12, 0);
  printf("Marchand : Voici les items disponibles dans mon magasin.\n\n");
  color(15, 0);
  Sleep(2000);
  printf("     _________________\n");
  printf("    |                 |\n");
  printf("    | (1) Bombe : %d$  |\n", bombe);
  printf("    | (2) Fleche : %d$ |\n", fleche);
  printf("    | (3) Lance : %d$  |\n", lance);
  printf("    | (4) Corde : %d$ |\n", corde);
  printf("    |_________________|\n");
  printf("\n\n");
  Sleep(2000);



  // acheter ou partir
  color(12, 0);
  printf("Marchand : Souhaites-tu acheter (1) ou partir (2) ?  ");
  scanf("%d", &choixpos);
  printf("\n\n");



  // acheter
  if (choixpos == 1) {

    // rappel des items
    Sleep(1000);
    color(12, 0);
    printf("Marchand : Fais ton choix parmi mes items.\n\n");
    color(15, 0);
    Sleep(2000);
    printf("     _________________\n");
    printf("    |                 |\n");
    printf("    | (1) Bombe : %d$  |\n", bombe);
    printf("    | (2) Fleche : %d$ |\n", fleche);
    printf("    | (3) Lance : %d$  |\n", lance);
    printf("    | (4) Corde : %d$ |\n", corde);
    printf("    |_________________|\n");
    printf("\n\n");
    Sleep(2000);

    // choix de l'item
    color(12, 0);
    printf("Marchand : Que souhaites-tu acheter ? (partir=0)  ");
    scanf("%d", &choixitem);
    printf("\n\n");
    Sleep(2000);

    // le joueur décide de partir
    if (choixitem == 0) {
      color(12, 0);
      printf("Marchand : Au revoir %s, et bon courage !\n", nom);
      printf("\n\n");
    }

// le joueur décide d'acheter
while (choixitem != 0) {

    // le joueur choisit les bombes
    if (choixitem == 1) {
      color(12, 0);
      printf("Marchand : Tu as choisi de prendre des bombes.\n");
      Sleep(2000);
      printf("Combien en veux-tu ?\n");
      scanf("%d", &nombreitem);
      printf("\n\n");
      Sleep(2000);
      if (nombreitem>argent/bombe) {
        printf("Marchand : Tu n'as pas assez d'argent, prends-en moins.\n\n");
        Sleep(2000);
      } else {
        printf("Marchand : Tu as choisi de prendre %d bombe(s). ", nombreitem);
        cout = bombe*nombreitem;
        Sleep(2000);
        color(10, 0);
        printf("Cout : %d$\n", cout);
        printf("\n\n");
        argent = argent-cout;
        Sleep(2000);
        printf("Argent restant : %d$\n\n", argent);
        printf("\n\n");
        Sleep(2000);
        // inventaire
        
      }
    }

    // le joueur choisi les flèches
    if (choixitem == 2) {
      color(12, 0);
      printf("Marchand : Tu as choisi de prendre des fleches. ");
      Sleep(2000);
      printf("Combien en veux-tu ?\n");
      scanf("%d", &nombreitem);
      printf("\n\n");
      Sleep(2000);
      if (nombreitem>argent/fleche) {
        printf("Marchand : Tu n'as pas assez d'argent, prends-en moins.\n\n");
        Sleep(2000);
      } else {
        printf("Marchand : Tu as choisi de prendre %d fleche(s). ", nombreitem);
        cout = fleche*nombreitem;
        Sleep(2000);
        color(10, 0);
        printf("Cout : %d$\n", cout);
        printf("\n\n");
        argent = argent-cout;
        Sleep(2000);
        printf("Argent restant : %d$\n\n", argent);
        printf("\n\n");
        Sleep(2000);
      }
    }

    // le joueur choisi les lances
    if (choixitem == 3) {
      color(12, 0);
      printf("Marchand : Tu as choisi de prendre des lances. ");
      Sleep(2000);
      printf("Combien en veux-tu ?\n");
      scanf("%d", &nombreitem);
      printf("\n\n");
      Sleep(2000);
      if (nombreitem>argent/lance) {
        printf("Marchand : Tu n'as pas assez d'argent, prends-en moins.\n\n");
        Sleep(2000);
      } else {
        printf("Marchand : Tu as choisi de prendre %d lance(s). ", nombreitem);
        cout = lance*nombreitem;
        Sleep(2000);
        color(10, 0);
        printf("Cout : %d$\n", cout);
        printf("\n\n");
        argent = argent-cout;
        Sleep(2000);
        printf("Argent restant : %d$\n\n", argent);
        printf("\n\n");
        Sleep(2000);
      }
    }

    // le joueur choisi les cordes
    if (choixitem == 4) {
      color(12, 0);
      printf("Marchand : Tu as choisi de prendre des cordes. ");
      Sleep(2000);
      printf("Combien en veux-tu ?\n");
      scanf("%d", &nombreitem);
      printf("\n\n");
      Sleep(2000);
      if (nombreitem>argent/corde) {
        printf("Marchand : Tu n'as pas assez d'argent, prends-en moins.\n\n");
        Sleep(2000);
      } else {
        printf("Marchand : Tu as choisi de prendre %d corde(s). ", nombreitem);
        cout = corde*nombreitem;
        Sleep(2000);
        color(10, 0);
        printf("Cout : %d$\n", cout);
        printf("\n\n");
        argent = argent-cout;
        Sleep(2000);
        printf("Argent restant : %d$\n\n", argent);
        printf("\n\n");
        Sleep(2000);
      }
    }


  }
}


  // partir
  if (choixpos != 1) {
    Sleep(1000);
    color(12, 0);
    printf("Marchand : Au revoir %s, et bon courage !\n", nom);
    printf("\n\n");
    Sleep(2000);
    color(15, 0);
  }

  return 0;
}
