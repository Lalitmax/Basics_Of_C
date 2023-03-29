#include<stdio.h>
int main()
{
    int a,b,c;
   printf("enter amount = ");
   scanf("%d", &a);
   printf("enter rate of interest =");
   scanf("%d",&b);
   printf("enter months =");
   scanf("%d",&c);

   printf("  %d", a+a/100*3*c);
   return 0;
}

