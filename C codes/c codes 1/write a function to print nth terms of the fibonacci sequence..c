#include<stdio.h>
int fibonacci(int n);
int main()
{
    int n=6;
    for(int i=0; i<=n; i++)
    {
        printf("%d\t", fibonacci(i));
    }
    return 0;
}
int fibonacci(int n)
{
    if(n==0){
        return 0;
    }if(n==1){
    return 1;}
    int fib=(fibonacci(n-1) + fibonacci(n-2));
    return fib;
}

