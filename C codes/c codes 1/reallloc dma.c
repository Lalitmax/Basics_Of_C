#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int *)malloc(5*sizeof(int));
   printf("Enter numbers(5) : ");
   for(int i=0; i<5; i++)
   {
       scanf("%d", &ptr[i]);
   }
   ptr=realloc(ptr,8);
   printf("Enter numbers(8) : ");
    for(int i=0; i<8; i++)
   {
       scanf("%d", &ptr[i]);
   }

    for(int i=0; i<8; i++)
   {
       printf("%d\n",ptr[i]);
   }


   return 0;
}
