#include <math.h>
#include <stdbool.h>
#include <stdio.h>
int main()
{
    int n,x,y,u,v;
    printf("Enter the term to be checked.\n");
    scanf("%d",&n);
    x=(5*n*n)+4;
    y=(5*n*n)-4;
    u=sqrt(x);
    v=sqrt(y);
    if(((u*u)==x) || ((v*v)==y))
    {
        printf("%d is a fibonacci term.",n);
    }
    else
    {
        printf("%d is not a fibonacci term.",n);
    }
    return 0;
}


