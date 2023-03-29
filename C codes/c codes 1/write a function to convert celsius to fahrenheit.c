#include<stdio.h>
float converttemp(float n );
int main()
{float n=36;
    printf("fahrenheit is  : %f",converttemp(n));
    return 0;
}
float converttemp(float n)
{
    return  (n*9/5) +32;
}
