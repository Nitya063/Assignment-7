#include<stdio.h>
int main()
{
    int i,cnt,j,a,b;
    printf("Enter the limits.\n");
    scanf("%d%d",&a,&b);
    printf("Prime no.s b/w %d and %d :\n",a,b);
    for(i=a+1;i<b;i++)
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

