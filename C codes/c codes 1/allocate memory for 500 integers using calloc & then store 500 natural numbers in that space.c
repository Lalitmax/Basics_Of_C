#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int *)calloc(500,sizeof(int));



    for(int i=0; i<=500; i++)
    { int s;
   s=  ptr[i]=i;
printf("%d\t", s);
    }



    return 0;
}

