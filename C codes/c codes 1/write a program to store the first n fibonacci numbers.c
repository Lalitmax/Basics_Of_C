#include<stdio.h>
int main()
{
     int fib[10];
     fib[0]=0;
     fib[1]=1;

    printf("%d\t %d\t", fib[0], fib[1]);

     for(int i=2; i<10; i++)
     {
         fib[i]= fib[i-1] + fib[i-2];
         printf("%d\t", fib[i]);
     }

     return 0;
}
