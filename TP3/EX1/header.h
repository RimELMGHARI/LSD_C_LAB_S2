
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct celluleDouble
{
    char element;
    struct celluleDouble * suivant;
    struct celluleDouble * precedent;
};
typedef struct celluleDouble celluleDouble;

struct listeDouble
{
    celluleDouble * debut;
    celluleDouble * fin;
    unsigned longueur;
};
typedef struct listeDouble listeDouble;

//prototypes
void ajoutFinD(char ,listeDouble *);
void affichageListeDouble(listeDouble );
int listeDoubleVide(listeDouble );
