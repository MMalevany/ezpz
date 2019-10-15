#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float a,r,tmp;

int main(int argc, char const *argv[])
{
	printf("R=");
	scanf("%f", &r);
	printf("A=");
	scanf("%f", &a);
	
	tmp=sqrt(a*a);
	
	if(r>=tmp/2) printf("YES");
	else printf("NOPE");
	
	return 0;
}
