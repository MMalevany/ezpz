#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	float a,b,c,z,x,y,s;

	/*
	x=-4.5;
	y=0.75*pow(10,-4);
	z=-0.845*pow(10,2);
	*/

	scanf("%f%f%f", &x, &y, &z);

	a=pow((9+pow((x-y),2)),1.0/3);
	b=pow(x,2)+pow(y,2)+2;
	c=pow(exp(1),fabs(x-y))*pow(tan(z),3);

	s=a/b-c;

	printf("Result: ");
	printf("%f", s);
	printf("\n");

	return 0;
}