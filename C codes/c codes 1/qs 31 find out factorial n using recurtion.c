#include<stdio.h>
int fact(int n);
int main()
{ int n=5;
printf("factorial %d is : %d", n,fact(n));
return 0;

}
int fact(int n)
{    if(n==0)
{
    return 1;
}
    int fcatnm1=fact(n-1);
    int factorial = fcatnm1*n;
    return factorial;
}
