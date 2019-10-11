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
	
	tmp=a*sqrt(2);
	
	if(r*2>=tmp) printf("YES");
	else printf("NO");
	
	return 0;
}
