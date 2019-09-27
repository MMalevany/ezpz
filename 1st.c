#include <stdlib.h>
#include <stdio.h>

int x;

int main(int argc, char const *argv[])
{
    scanf("%d", &x);

    x=x*x*16;

    printf("%d", x);
    printf("\n");

    return 0;
}


