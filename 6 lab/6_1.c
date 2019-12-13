#include <stdio.h>
#include <math.h>

int n,i,sum,tmp,ans;

int main() {

    scanf("%d", &n);

    int a[n+1];

    for(i=1; i<=n; i++) scanf("%d", &a[i]);

    sum=1;

    for(i=1; i<=n; i++)
    {
        if(i%2==0) sum*=a[i];
        if(tmp==2) continue;
        if(a[i]==0 && tmp==0) {tmp=1; continue;}
        if(tmp==1) ans+=a[i];
        if(a[i]==0 && tmp==1) tmp=2;
    }

    printf("proizvedenie s chetnymi nomerami: %d\n", sum);
    printf("summa mejdu nullami %d\n", ans);

    return 0;
}