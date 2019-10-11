#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int i,j,h,temp,gg,ans,save;
float lulz;

int main(int argc, char const *argv[])
{
    
    for(i=1; i<=9; i++)
    {
        for(j=i; j<=9; j++)
        {
            for(h=j; h<=9; h++)
            {
                temp=i*100;
                temp+=j*10;
                temp+=h;
                save=0;
                ans=0;
                for(gg=1; gg<=temp; gg++)
                {
                    if(gg*gg==temp) {save=gg; break;}
                    if(gg*gg>temp) break;
                }
                if(save==0) continue;
                //printf("%d",temp);
                //printf(" ");
                //printf("%d",save);
                //printf("\n");
                for(gg=1; gg<=save; gg++) {if(save%gg==0) ans++;}
                if(ans==2) 
                {
                    printf("%d", temp);
                    printf("\n");
                }
            }
        }
    }

    return 0;
}
