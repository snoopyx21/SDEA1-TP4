//fichier pile.h

#ifndef __PILE_CHAR_H__
#define __PILE_CHAR_H__

#ifndef __type_NAT__
#define __type_NAT__
 typedef unsigned int Nat;
#endif

#ifndef __type_BOOL__
#define __type_NAT__
 typedef enum {faux=0, vrai} Bool;
#endif


#define MAX_P 50
typedef struct { char tab[MAX_P];
         Nat h;} pile;

pile pile_vide();
pile pile_empiler(pile p, char a);
pile pile_deplier(pile p);
pile pile_remplacer(pile p, char a);
pile pile_sommet(pile p);
Bool pile_rien(pile p);
Nat pile_hauteur(pile p);
void print_pile(pile p);
#endif

