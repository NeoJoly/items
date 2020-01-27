#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main() {

  char nom[100];
  int bombe = 5;
  int fleche = 3;
  int lance = 5;
  int corde = 10;
  int argent = 100;
  int choixitem;
  int nombreitem;
  int cout;
  int choixpos;



  // choix du nom
  printf("Comment vous appelez-vous ?\n");
  scanf("%s", nom);
  printf("\n\n");
  if (strcmp( nom, " ") == 0) {
    strcpy(nom,"voyageur");
  }



  // mise en situation
  printf("Marchand : Bonjour %s, bienvenue dans mon magasin !\n\n", nom);
  printf("Argent disponible : %d$\n\n", argent);



  // présentation des items
  printf("Marchand : Voici les items disponibles dans mon magasin.\n\n");
  printf("     (1) Bombe : %d$\n", bombe);
  printf("     (2) Fleche : %d$\n", fleche);
  printf("     (3) Lance : %d$\n", lance);
  printf("     (4) Corde : %d$\n", corde);
  printf("\n\n");



  // acheter ou partir
  printf("Marchand : Souhaites-tu acheter (1) ou partir (2) ?\n");
  scanf("%d", &choixpos);
  printf("\n\n");



  // acheter
  while (choixpos == 1) {

    // rappel des items
    printf("Marchand : Voici les items disponibles dans mon magasin.\n\n");
    printf("     (1) Bombe : %d$\n", bombe);
    printf("     (2) Fleche : %d$\n", fleche);
    printf("     (3) Lance : %d$\n", lance);
    printf("     (4) Corde : %d$\n", corde);
    printf("\n\n");

    // choix de l'item
    printf("Marchand : Que souhaites-tu acheter ? (partir = 0)\n");
    scanf("%d", &choixitem);
    printf("\n\n");

    // le joueur décide de partir
    if (choixitem == 0) {
      printf("Marchand : Au revoir et bon courage !\n");
      printf("\n\n");
    }

    // le joueur choisi les bombes
    if (choixitem == 1) {
      printf("Marchand : Vous avez choisi de prendre des bombes. ");
      printf("Combien en voulez-vous ?\n");
      scanf("%d", &nombreitem);
      printf("\n\n");
      printf("Marchand : Vous avez choisi de prendre %d bombe(s). ", nombreitem);
      cout = bombe*nombreitem;
      printf("Cout : %d$\n", cout);
      printf("\n\n");
      argent = argent-cout;
      printf("Argent disponible : %d$\n\n", argent);
      printf("\n\n");
    }


  }



  // partir
  if (choixpos != 1) {
    printf("Marchand : Au revoir et bon courage !\n");
    printf("\n\n");
  }


  return 0;
}
