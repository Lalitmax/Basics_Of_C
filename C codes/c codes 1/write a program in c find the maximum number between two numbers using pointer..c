#include<stdio.h>
int main()
{   int a,b;
printf("enter two number to check who is maximum : ");
scanf("%d%d", &a,&b);
    int *ptr1 = &a;
    int *ptr2 = &b;
   if(*ptr1>*ptr2)
   {
       printf(" the maximum number is %d",*ptr1);
   }
   else {
        printf(" the maximum number is %d",* ptr2);

    }
    return 0;


}
