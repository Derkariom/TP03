typedef struct pile
{
    int n;
    struct pile *suivant;
}*pile;
pile pile_vide();
pile empiler(pile p , int e);
pile depiler(pile p);