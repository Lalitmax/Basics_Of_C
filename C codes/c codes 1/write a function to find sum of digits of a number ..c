#include<stdio.h>

 void prtsum(int a, int b);
 int main()
 {   int a,b;
      printf("enter two numbers : ");
 scanf("%d%d", &a,&b);

     prtsum(a, b);
 }
void prtsum(int x, int y)
{
    int sum;
    sum=x+y;
    printf("the sum is :%d", sum);
}
