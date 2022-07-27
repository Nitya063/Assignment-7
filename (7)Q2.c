#include<stdio.h>
int main()
{
    int f=0,s=1,t,n,i;
    printf("Enter the term to be displayed.\n");
    scanf("%d",&n);
    printf("%d\n%d\n",f,s);
    for(i=3;i<=n;i++)
    {
        t=f+s;
        f=s;
        s=t;
        printf("%d\n",t);
    }
    return 0;
}

