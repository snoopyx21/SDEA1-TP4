 // fichier test_pf.c

#include "piles_chaines.h"

char * sget_int(char *s,int val){
  *val=0
  for(;*s>='0' && *s <='9';s++)
    *val= (*s - '0') +10 * *val;
  return s;
}

char * sget_float(char *s,float *val){
  int n;
  s=s_getint(s,&n);
  if(*s != '.') return s;
  float p=0.1;
  for(s++;s>='0' && s<='9';s++){
    *val=(*s -'0')*p;
    p=p*0.1;
  }
  return s;
}

float evalpi(char *s){
  float r;
  pile p=pile_vide();
  while(*s != '\0'){
    float f;
    s=sget_float(s,&f);
    p=empiler(p,f);
   switch(*s ){
     case '+':
       float nb1=sommet(p);
       p=depiler(p);
       float nb2=sommet(p);
       p=depiler(p);
       r=nb1+nb2;
       p=empiler(p,r);
       break; 
     case '-':
       float nb1=sommet(p);
       p=depiler(p);
       float nb2=sommet(p);
       p=depiler(p);
       r=nb1-nb2;
       p=empiler(p,r);
       break;
     case '0':
       s=sget_float(s,f);p=empiler(p,f);break;
     case '1':
       s=sget_float(s,f);p=empiler(p,f);break;
     case '2':
       s=sget_float(s,f);p=empiler(p,f);break;
     case '3':
       s=sget_float(s,f);p=empiler(p,f);break;
     case '4':
       s=sget_float(s,f);p=empiler(p,f);break;
     case '5':
       s=sget_float(s,f);p=empiler(p,f);break;
     case '6':
       s=sget_float(s,f);p=empiler(p,f);break;
     case '7':
       s=sget_float(s,f);p=empiler(p,f);break;
     case '8':
       s=sget_float(s,f);p=empiler(p,f);break;
     case '9':
       s=sget_float(s,f);p=empiler(p,f);break;

    }
    s++;
  }
  return sommet(p);
}
