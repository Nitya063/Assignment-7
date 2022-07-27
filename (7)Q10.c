#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum,dup,r,cnt;
    printf("Armstrong no.s upto 1000:\n");
    for(n=1;n<=1000;n++)
    {
        cnt=0;
        sum=0;
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
    {
        printf("%d\n",n);
    }
    }
    return 0;
}

