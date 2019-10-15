#include <stdio.h>
#include <stdlib.h>

int a,b,c,ans;

int main(int argc, char *argv[]) {
	
	scanf("%d%d%d", &a, &b, &c);
	
	if(a>0) ans++;
	if(b>0) ans++;
	if(c>0) ans++;
	
	printf("%d", ans);
	
	return 0;
}
