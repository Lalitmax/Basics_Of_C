#include<stdio.h>
#include<stdlib.h>
int main()
{
 int *ptr;
 int i;
 while(i<45545)
 {
     printf("welcome to lalit max\n");
     ptr=malloc(45545*sizeof(int));
   if(i%100==0)
     {
         getchar();
     }

     i++;
free(ptr);
 }
    return 0;
}
