#include <stdio.h>
#include <math.h>
#include <string.h>

int i,j=-1,fl;

int main() {

    char str[101]="";
    char ans[101]="";

    gets(str);

    for(i=0; i<strlen(str); i++)
    {
        if(str[i]==' ' && fl==0) continue;
        if(str[i]!=' ') fl=1;
        if(str[i]==' ' && str[i-1]==' ') continue;
        j++;
        ans[j]=str[i];
    }

    puts(ans);

    return 0;
}