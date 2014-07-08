#include <stdio.h>
#include <stdlib.h>

void    ft_ultimate_ft(int *********i);

int main()
{
    int a = 0;
    int *b = &a;
    int **c = &b;
    int ***d = &c;
    int ****e = &d;
    int *****f = &e;
    int ******g = &f;
    int *******h = &g;
    int ********i = &h;
    int *********j = &i;

    printf("%d\n",a);

    ft_ultimate_ft(j);

    printf("%d\n",a);

    return 0;
}
