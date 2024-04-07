/*Z
Z Y
Z Y X
Z Y X W
Z Y X W V */ 
#include<stdio.h>
int main()
{
    int i,j ;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ", 91 - j);
        }
        printf("\n");
    }
    return 0 ;
}