#include <stdio.h>
#include <stdlib.h>

void    test(int *********i){
    *********i = 42;
}

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

    test(j);

    printf("%d\n",a);

    return 0;
}
