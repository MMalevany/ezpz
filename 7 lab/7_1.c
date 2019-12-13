#include <stdio.h>
#include <math.h>

int n,m,i,j,cur,fl,a[101][101];

int find()
{
    for(i=1; i<=n; i++)
    {
        fl=0;
        for(j=1; j<=m; j++)
        {
            if(a[i][j]>=0) fl=1;
        }
        if(fl==0) return i;
    }
}

void sum(int b)
{
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++) a[i][j]+=b;
    }
}

int main() {

    scanf("%d%d", &n, &m);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++) scanf("%d", &a[i][j]);
    }

    cur=find();
    sum(a[cur][1]);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++) printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}