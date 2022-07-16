#include<stdio.h>
#include<stdlib.h>
#include"pile.h"
pile pile_vide()
{
    return NULL;
}
pile empiler(pile p , int e)
{
    pile cellule;
    cellule = (pile)malloc(sizeof(pile));
    cellule->n = e;
    cellule->suivant = p;
    return cellule;
}
pile depiler(pile p)
{
    pile ptr;
    if(p == NULL)
        fprintf(stderr , "La pile est vide\n");
    else
    {
        ptr = p;
        p = p->suivant;
        free(ptr);
    }
    return p;
}
void affichier_pile(pile p)
{
    pile tmp;
    tmp = p;
    while (tmp != NULL)
    {
        printf("%d\n",tmp->n);
        tmp = tmp->suivant;
    }
}
