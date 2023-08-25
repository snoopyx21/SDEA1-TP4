//fichier pile_chaines.h

#ifndef __PILE_FLOAT__
#define __PILE_FLOAT__
#define S float
#ifndef __type_NAT__
#define __type_NAT__
 typedef unsigned int Nat;
#endif

#ifndef __type_BOOL__
#define __type_NAT__
 typedef enum {faux=0, vrai} Bool;
#endif


#define MAX_P 50
typedef struct sp { S v;
         struct sp *s;}  *pile;

pile pile_vide();
pile pile_empiler(pile p, S a);
pile pile_deplier(pile p);
pile pile_remplacer(pile p, S a);
S pile_sommet(pile p);
Bool pile_rien(pile p);
Nat pile_hauteur(pile p);
void print_pile(pile p);
pile swap(pile p);
S ieme(pile p, Nat n);
pile l2f(pile p);
pile f2l(pile p);
pile concat(pile p1,pile p2);
pile liberer_pile(pile p);
#endif


