#include<stdio.h>
#include<stdlib.h>
#include"pile.h"
pile pile_vide()
{
    return NULL;
}
<<<<<<< HEAD
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
        p = p->suivant
        free (ptr);
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
=======
pile empiler(pile p,int n)
{
    pile elem = malloc(sizeof(pile));
    elem->n = n;
    elem->suivant = p;
    return elem;
>>>>>>> f475cf147c21208495eaa3f357cc930a2fbce8b5
}
