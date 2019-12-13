#include <stdio.h>
#include <math.h>

int n,m,i,j,mn,mx,mn1,mx1,ii,jj,ans;

int main() {

    n=10;
    m=12;

    int a[n+1][m+1];

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++) scanf("%d", &a[i][j]);
    }

    for(i=1; i<=n; i++) {
        for (j = 1; j <= m; j++) {
            mn = mx = mn1 = mx1 = 0;
            for (ii = 1; ii <= n; ii++) {
                if (a[i][j] < a[ii][j]) mn = 1;
                if (a[i][j] > a[ii][j]) mx = 1;
            }
            if (mn == 0 || mx == 0) {
                for (jj = 1; jj <= m; jj++) {
                    if (a[i][j] < a[i][jj]) mn1 = 1;
                    if (a[i][j] > a[i][jj]) mx1 = 1;
                }
                if (mn == 0 && mx1 == 0) {
                    ans++;
                    continue;
                }
                if (mx == 0 && mn1 == 0) {
                    ans++;
                    continue;
                }
            }
        }
    }

    printf("Kolichestvo sedlovyh tochek: %d\n", ans);

    return 0;
}