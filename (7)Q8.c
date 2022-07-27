#include<stdio.h>
int main()
{
    int cnt,j,a;
    printf("Enter the number.\n");
    scanf("%d",&a);
    printf("Prime no.s after %d is:\n",a);
    a++;
   while(1)
   {
       cnt=0;
        for(j=2;j<=(a/2);j++)
        {
            if(a%j==0)
            {
                cnt++;
            }
        }
        if(cnt==0)
        {
            printf("%d\n",a);
            break;
        }
        a++;
    }
    return 0;
}


