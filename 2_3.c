#include <stdio.h>
#include <stdlib.h>

int a;

int main(int argc, char *argv[]) {
	printf("Month=");
	scanf("%d", &a);
	
	if(a==12) {printf("Winter\n"); return 0;}
	if(a<=2) {printf("Winter\n"); return 0;}
	if(a<=5) {printf("Spring\n"); return 0;}
	if(a<=8) {printf("Summer\n"); return 0;}
	if(a<=11) {printf("Autumn\n"); return 0;}
	
	return 0;
}
