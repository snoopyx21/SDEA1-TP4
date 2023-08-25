//pile.c 

#include "pile.h"
#include <stdio.h>


pile pile_vide(){
  pile p;
  p.h=0;
  return p;
}
pile pile_empiler(pile p, char a){
  if(p.h<50){
    p.tab[p.h]=a;
    p.h++;
  }
  else printf("pile remplie \n");
  return p;
}
pile pile_deplier(pile p){
  p.h--;
  return p;
}
pile pile_remplacer(pile p, char a){
  p.tab[p.h-1]=a;
  return p;
}
Bool pile_rien(pile p){
  return (p.h==0);
}
Nat pile_hauteur(pile p){
  return p.h;
}
void print_pile(pile p){
  int i;
  for(i=0;i<p.h;i++){
    printf("element %d : %c \n",i+1,p.tab[i]);
  }
}
