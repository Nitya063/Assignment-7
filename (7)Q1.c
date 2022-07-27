#include<stdio.h>
int main()
{
    int f=0,s=1,t,n,i;
    printf("Enter the term to be known.\n");
    scanf("%d",&n);
    for(i=3;i<=n;i++)
    {
        t=f+s;
        f=s;
        s=t;
    }
    printf("%d term of fibonacci series is = %d ",n,t);
    return 0;
}
