#include <stdio.h>
#include <stdlib.h>

int n,i,ans;

int main(int argc, char *argv[]) {
	
	printf("Kolichestvo elementov massiva=");
	scanf("%d", &n);
	
	int a[n+1];
	
	for(i=1; i<=n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(i=1; i<n; i++)
	{
		if(a[i]>a[i+1]) ans++;		
	}
	
	printf("Result: %d", ans);
	
	return 0;
}

