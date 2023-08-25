//fichier parentheses1.c
#include <string.h>
#include "pile.h"
#include "pile.c"



Bool parentheses(char *mot){
  int i=0,j;
  pile p;
  p=pile_vide();
  p.h= strlen(mot);
  for(;i<=p.h;i++){
    if(p.tab[i]=='(') pile_empiler(p,'(');
    if(p.tab[i]=='[') pile_empiler(p,'[');
    if(p.tab[i]=='{') pile_empiler(p,'{');
    if(p.tab[i]==')'){
      for(j=0;j<=i;j++)
        if( (pile_rien(p)) ||( (p.tab[j]) !='(') ) 
          return 0;
    }
    if(p.tab[p.h]==']'){
      for(j=0;j<=i;j++)
        if( (pile_rien(p)) ||( (p.tab[j]) !='[') ) 
          return 0;
    }
    if(p.tab[p.h]=='}'){  
      for(j=0;j<=i;j++)
        if( (pile_rien(p)) ||( (p.tab[j]) !='{') ) 
          return 0;
    }
  }
    return pile_rien(p);
} 
    
    
    
