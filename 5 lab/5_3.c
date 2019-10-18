#include <stdio.h>

int n,m,i,j,fl,save,tmp;

int main() {

    printf("Kolichestvo strok ");
    scanf("%d", &n);
    printf("Kolichestvo stolbcov ");
    scanf("%d", &m);

    int a[n+1][m+1];

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i=1; i<=n; i++)
    {
        fl=0;
        for(j=1; j<=m; j++)
        {
            if(a[i][j]>=0) fl=1;
        }
        if(fl==0) {save=i; break;}
    }

    tmp=a[save][1];
    
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            a[i][j]+=tmp;
        }
    }

    printf("\n");

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}