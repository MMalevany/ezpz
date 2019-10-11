#include <stdlib.h>
#include <stdio.h>

int ans,proc,money=10000;

int main(int argc, char const *argv[])
{
    
    printf("Result:");
    
    while(1)
    {
        ans++;
        proc=money/100;
        proc*=3;
        money+=proc;
        if(money>=20000) {printf("%d", ans); break;}
    }

    return 0;
}
