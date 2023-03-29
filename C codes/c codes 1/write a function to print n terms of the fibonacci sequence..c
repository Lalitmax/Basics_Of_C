#include<stdio.h>
int calculatefibonacci(int n);
int main()
{
    int n=4;
printf("the fibonacci is : %d",calculatefibonacci(n) );
    return 0;
}
int calculatefibonacci(int n)
{
    if(n==1)
    {
        return 1;
    }
  else if (n==0)
  {
      return 0;
  }
  int fib =( calculatefibonacci(n-1) + calculatefibonacci(n-2)); //
  return  fib;
}
