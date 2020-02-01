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

  char nom[30];
  int bombe = 5;
  int fleche = 3;
  int lance = 5;
  int corde = 10;
  int argent = 500;
  int choixpos;
  int choixitem = 42;
  int nombrebombes = 0;
  int nombrefleches = 0;
  int nombrelances = 0;
  int nombrecordes = 0;
  int nombrebombestotal = 0;
  int nombreflechestotal = 0;
  int nombrelancestotal = 0;
  int nombrecordestotal = 0;
  int cout;
  int choixinventaire = 2;

  system("cls");

  //titre
  color(0, 15);
  printf("\n\n");
  printf("                    <<<<<<<<<< SYSTEME DE SHOP / INVENTAIRE RPG >>>>>>>>>>                    \n\n");

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
  color(9, 0);
  printf("Vous arrivez dans un petit magasin qui vend des items.\n\n");
  Sleep(2000);
  color(12, 0);
  printf(">> Marchand : Bonjour %s, bienvenue dans mon magasin !\n\n", nom);
  Sleep(2000);
  color(10, 0);
  printf("[Argent disponible] %d$\n\n", argent);
  color(15, 0);
  Sleep(2000);



  // présentation des items
  color(12, 0);
  printf(">> Marchand : Voici les items disponibles dans mon magasin.\n\n");
  color(15, 0);
  Sleep(2000);
  printf("     _____________\n");
  printf("    |             |\n");
  printf("    |   Bombes    |\n", bombe);
  printf("    |   Fleches   |\n", fleche);
  printf("    |   Lances    |\n", lance);
  printf("    |   Cordes    |\n", corde);
  printf("    |_____________|\n");
  printf("\n\n");
  Sleep(2000);



  // acheter ou partir
  color(12, 0);
  printf(">> Marchand : Souhaites-tu acheter (1) ou partir (2) ?  ");
  scanf("%d", &choixpos);
  printf("\n\n");



// acheter
if (choixpos == 1) {

  // rappel des items
  while (choixinventaire == 2 && choixitem != 0) {
    Sleep(1000);
    color(9, 0);
    printf("Items disponibles à l'achat.\n\n");
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
      printf(">> Marchand : Que souhaites-tu acheter ? (partir=0)  ");
      scanf("%d", &choixitem);
      printf("\n\n");
      Sleep(2000);



    // le joueur décide de partir
    if (choixitem == 0) {
      color(12, 0);
      printf(">> Marchand : Au revoir %s, et bon courage !\n", nom);
      printf("\n\n");
      Sleep(2000);
      color(9, 0);
      printf("Vous quittez le magasin et reprenez votre chemin.\n\n");
      color(15, 0);
    }

// le joueur décide d'acheter
while (choixitem == 1 || choixitem == 2 || choixitem == 3 || choixitem == 4) {

    // le joueur choisit les bombes
    if (choixitem == 1) {
      color(12, 0);
      printf(">> Marchand : Tu as choisi de prendre des bombes. ");
      Sleep(1000);
      printf("Combien en veux-tu ?  ");
      scanf("%d", &nombrebombes);
      printf("\n\n");
      Sleep(2000);
      if (nombrebombes>argent/bombe) {
        printf(">> Marchand : Tu n'as pas assez d'argent, prends-en moins.\n\n");
        Sleep(2000);
      } else {
        printf(">> Marchand : Tu as choisi de prendre %d bombe(s).\n\n", nombrebombes);
        nombrebombestotal = nombrebombestotal + nombrebombes;
        cout = bombe*nombrebombes;
        Sleep(2000);
        color(14, 0);
        printf("Cout : %d$\n\n", cout);
        argent = argent-cout;
        Sleep(2000);
        color(10, 0);
        printf("[Argent restant] %d$\n\n", argent);
        printf("\n\n");
        Sleep(2000);
      }
    }

    // le joueur choisit les flèches
    if (choixitem == 2) {
      color(12, 0);
      printf(">> Marchand : Tu as choisi de prendre des fleches. ");
      Sleep(1000);
      printf("Combien en veux-tu ?  ");
      scanf("%d", &nombrefleches);
      printf("\n\n");
      Sleep(2000);
      if (nombrefleches>argent/fleche) {
        printf(">> Marchand : Tu n'as pas assez d'argent, prends-en moins.\n\n");
        Sleep(2000);
      } else {
        printf(">> Marchand : Tu as choisi de prendre %d fleche(s).\n\n", nombrefleches);
        nombreflechestotal = nombreflechestotal + nombrefleches;
        cout = fleche*nombrefleches;
        Sleep(2000);
        color(14, 0);
        printf("Cout : %d$\n\n", cout);
        argent = argent-cout;
        Sleep(2000);
        color(10, 0);
        printf("[Argent restant] %d$\n\n", argent);
        printf("\n\n");
        Sleep(2000);
      }
    }

    // le joueur choisit les lances
    if (choixitem == 3) {
      color(12, 0);
      printf(">> Marchand : Tu as choisi de prendre des lances. ");
      Sleep(1000);
      printf("Combien en veux-tu ?  ");
      scanf("%d", &nombrelances);
      printf("\n\n");
      Sleep(2000);
      if (nombrelances>argent/lance) {
        printf(">> Marchand : Tu n'as pas assez d'argent, prends-en moins.\n\n");
        Sleep(2000);
      } else {
        printf(">> Marchand : Tu as choisi de prendre %d lance(s).\n\n", nombrelances);
        nombrelancestotal = nombrelancestotal + nombrelances;
        cout = lance*nombrelances;
        Sleep(2000);
        color(14, 0);
        printf("Cout : %d$\n\n", cout);
        argent = argent-cout;
        Sleep(2000);
        color(10, 0);
        printf("[Argent restant] %d$\n\n", argent);
        printf("\n\n");
        Sleep(2000);
      }
    }

    // le joueur choisit les cordes
    if (choixitem == 4) {
      color(12, 0);
      printf(">> Marchand : Tu as choisi de prendre des cordes. ");
      Sleep(1000);
      printf("Combien en veux-tu ?  ");
      scanf("%d", &nombrecordes);
      printf("\n\n");
      Sleep(2000);
      if (nombrecordes>argent/corde) {
        printf(">> Marchand : Tu n'as pas assez d'argent, prends-en moins.\n\n");
        Sleep(2000);
      } else {
        printf(">> Marchand : Tu as choisi de prendre %d corde(s).\n\n", nombrecordes);
        nombrecordestotal = nombrecordestotal + nombrecordes;
        cout = corde*nombrecordes;
        Sleep(2000);
        color(14, 0);
        printf("Cout : %d$\n\n", cout);
        argent = argent-cout;
        Sleep(2000);
        color(10, 0);
        printf("[Argent restant] %d$\n\n", argent);
        printf("\n\n");
        Sleep(2000);
      }
    }

    // inventaire
    color(9,0);
    printf("Souhaites-tu voir ton inventaire (1) ou continuer tes achats (2) ?  ");
    scanf("%d", &choixinventaire);
    printf("\n\n");

    if (choixinventaire == 1) {
      printf("Contenu de l'inventaire :\n\n");
      color(10, 0);
      printf("       [Argent] %d$\n\n", argent);
      Sleep(2000);
      color(15,0);
      printf("     --> Bombes : %d\n", nombrebombestotal);
      Sleep(500);
      printf("     --> Cordes : %d\n\n\n", nombrecordestotal);
      Sleep(500);
      printf("     --> Fleches : %d\n", nombreflechestotal);
      Sleep(500);
      printf("     --> Lances : %d\n", nombrelancestotal);
      Sleep(2000);
    }

    choixinventaire = 2;
    choixitem = 42;

    }
  }
}

  // partir
  if (choixpos != 1) {
    Sleep(1000);
    color(12, 0);
    printf(">> Marchand : Au revoir %s, et bon courage !\n", nom);
    printf("\n\n");
    Sleep(2000);
    color(9, 0);
    printf("Vous quittez le magasin et reprenez votre chemin.\n\n");
    Sleep(2000);
    color(15, 0);
  }

  return 0;
}
