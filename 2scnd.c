#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float s,x,y,z,temp,tmp,flex,a,b,c;

float e=2.718281828;

int main(int argc, char const *argv[])
{
    //scanf("%f%f%f", &x,&y,&z);
    x=-4.5;
    y=0.75*powf(10,-4);
    z=-0.845*pow(10,2);

    tmp=x-y;
    flex=2;

    a=powf(tmp,flex);
    a+=9;
    a=pow(a,1./3);

    b=powf(x,2)+pow(y,2)+2;

    c=pow(e,abs(x-y))*pow(tan(z),3);

    s=a/b-c;

    printf("%f", s);

    return 0;
}


