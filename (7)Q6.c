#include<stdio.h>
int main()
{
    int i,cnt,j;
    printf("Prime no.s upto 100:\n");
    for(i=2;i<=100;i++)
    {
        cnt=0;
        for(j=2;j<=(i/2);j++)
        {
            if(i%j==0)
            {
                cnt++;
                break;
            }
        }
        if(cnt==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
