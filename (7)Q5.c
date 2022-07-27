#include<stdio.h>
#include<conio.h>
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
	 if(min == 1)
	 {
	  printf("%d and %d are CO-PRIME NUMBERS.",a,b);
	 }
	 else
	 {
	  printf("%d and %d are NOT CO-PRIME NUMBERS.",a,b);
	 }
	 getch();
	 return(0);
}
