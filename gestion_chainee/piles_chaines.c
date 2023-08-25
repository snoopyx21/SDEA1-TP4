//pile_chaine.c 

#include "piles_chaines.h"
#include <stdio.h>
#include <stdlib.h>

#define S float
pile pile_vide(){
  return NULL;
}
pile pile_empiler(pile p, S a){
  pile tmp=(pile) malloc(sizeof(struct sp));
  tmp->v=a;
  tmp->s=p;
  return tmp;
}
pile pile_deplier(pile p){
  pile tmp=p->s;
  //free(p);
  return tmp;
}
pile pile_remplacer(pile p, S a){
  p->v=a;
  return p;
}
Bool pile_rien(pile p){
  return !p;
}
Nat pile_hauteur(pile p){
  Nat h;
  for(h=0;p;p=p->s) h++;
  return h;
}
void print_pile(pile p){
  int i;
  for(i=0;p;p=p->s)
    printf("char %d : %f \n",i+1,p->v); 
}
S sommet(pile p){
  return p->v;
}
pile swap(pile p){
  pile p2=p->s;
  p->s=p2->s;
  p2->s=p;
  return p2;
}
S ieme(pile p, Nat n){
  Nat ni;
  for(ni=0;ni<n;ni++)
    p=p->s;
  return p->v;
}
pile l2f(pile p){
  pile tmp=p; 
  while(p->s->s != NULL){
    p=p->s;
  }
  p->s->s=p;
  p->s=NULL;
  return p;
}
pile f2l(pile p){
  pile tmp=p;
  while(p->s != NULL)
    p=p->s;
  p->s=tmp;
  tmp=tmp->s;
  p->s->s=0;
  return tmp;
}
pile concat(pile p1,pile p2){
  if(p1==NULL) return p2;
  pile res=p1;
  while(p1->s !=NULL)
    p1=p1->s;
  p1->s=p2;
  return res;
}
