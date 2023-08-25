//test.c

#include "pile.h"
#include <stdio.h>
#include <stdlib.h>

void main(){
  pile a = pile_vide();
  if(pile_rien(a) ==1) printf("pile vide \n");
  else printf("pile non vide \n");
  a=pile_empiler(a,'d');
  a=pile_empiler(a,'u');
  print_pile(a);
  printf("longueur : %d \n",pile_hauteur(a));
  a=pile_deplier(a);
  print_pile(a);
  a=pile_empiler(a,'u');
  a=pile_empiler(a,'t');
  print_pile(a);
  a=pile_remplacer(a,'w');
  print_pile(a);
}

