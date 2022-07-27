 #include<stdio.h>
 int main()
 {
     int a,b,min;
     printf("Enter the numbers.\n");
     scanf("%d%d",&a,&b);
     if(a>b)
        min=b;
     else
        min=a;
     while (min > 0)
        {
        if (a % min == 0 && b % min == 0)
        {
            break;
        }
        min--;
        }
     printf("HCF of %d and %d = %d.",a,b,min);
     return 0;
 }
