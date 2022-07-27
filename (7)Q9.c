#include<stdio.h>
int main()
{
    int n,r,sum=0,dup,cnt=0;
    printf("Enter the no. to be checked.\n");
    scanf("%d",&n);
    dup=n;
    while(dup!=0)
        {
            cnt++;
            dup=dup/10;
        }
        dup=n;
    while(dup!=0)
    {
        r=dup%10;
        sum=sum+pow(r,cnt);
        dup=dup/10;
    }
    if(n==sum)
        printf("%d is an Armstrong no.",n);
    else
        printf("%d is an Armstrong no.",n);
    return 0;
}
