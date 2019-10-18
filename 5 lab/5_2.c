#include <stdio.h>

int mnj,mxj,mxi,mni,i,j,ii,jj,n,m;

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
        for(j=1; j<=m; j++)
        {
            mnj=mni=1e9;
            mxj=mxi=-1e9;
            for(ii=1; ii<=n; ii++)
            {
                if(a[ii][j]<mni) mni=a[ii][j];
                if(a[ii][j]>mxi) mxi=a[ii][j];
            }
            for(jj=1; jj<=m; jj++)
            {
                if(a[i][jj]<mnj) mnj=a[i][jj];
                if(a[i][jj]>mxj) mxj=a[i][jj];
            }
            if(a[i][j]==mni && a[i][j]==mxj) printf("i: %d j: %d\n",i,j);
            if(a[i][j]==mxi && a[i][j]==mnj) printf("i: %d j: %d\n",i,j);
        }
    }

    return 0;
}