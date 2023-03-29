#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int *)malloc(5*sizeof(int));
    ptr[0]=1;
    ptr[1]=4;
    ptr[2]=5;
    ptr[3]=3;
    ptr[4]=7;

   for(int i=0; i<5; i++)
   {
       printf("%d\n", ptr[i]);
   }
    free(ptr);

      ptr=(int *)malloc(5*sizeof(int));
    for(int i=0; i<5; i++)
    {
        printf("%d\n", ptr[i]);
    }
    return 0;
}

