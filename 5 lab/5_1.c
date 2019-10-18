#include <stdio.h>

int n,m,sum,i,j,tmp,tmp1,tmpp,tmpp1;

int main() {

    printf("Kolichestvo strok");
    scanf("%d", &n);
    printf("Kolichestvo stolbcov");
    scanf("%d", &m);
    
    int a[n+1][m+1],b[n+1],c[n+1];
    
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    for(i=1; i<=n; i++)
    {
        sum=0;
        for(j=1; j<=m; j++)
        {
            if(a[i][j]<0 && a[i][j]%2==0) sum+=a[i][j];
        }
        b[i]=sum;
        c[i]=i;
    }
    
    for(i=1; i<=n; i++)
    {
        for(j=i; j<n; j++)
        {
            if(b[i]>b[j])
            {
                tmp=b[i];
                tmp1=b[j];
                tmpp=c[i];
                tmpp1=c[j];
                b[i]=tmp1;
                b[j]=tmp;
                c[i]=tmpp1;
                c[j]=tmpp;
            }
        }
    }

    printf("%\n");
    
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            printf("%d ", a[c[i]][j]);
        }
        printf("\n");
    }

    return 0;
}