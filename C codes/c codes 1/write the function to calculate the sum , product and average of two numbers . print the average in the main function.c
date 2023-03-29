#include<stdio.h>
void dowork(int a, int b, int *sum, int *prod , float *avg );
int main()
{  int a=7,b=8, sum,prod;
float  avg;
dowork(a,b, &sum,&prod, &avg);
printf("the sum = %d \n the product = %d\n the average = %f \n", sum,prod,avg);

return 0;
}
void dowork(int a, int b, int *sum, int *prod , float *avg )
{
    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2.0;

}
