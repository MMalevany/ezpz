#include <stdio.h>
#include <stdlib.h>

int r,a;

int main(int argc, char *argv[]) {
	
	printf("R=");
	scanf("%d", &r);
	printf("A=");
	scanf("%d", &a);
	
	if(a<=r*2) printf("YES\n");
	else printf("NOPE\n");
	
	return 0;
}
