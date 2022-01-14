#include <stdio.h>
struct skk
{
    /* data */
    char *name;
    int tate;
    int yoko;
    char *tani;
};


void print_msk(struct skk *s)
{
    printf("%s,%d,h%s",s->name,s->tate * s->yoko,s->tani);
}

int main()
{
    struct skk s1 = {"1",2,5,"m"};

    print_msk(&s1);
}