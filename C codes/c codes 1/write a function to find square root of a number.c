#include<stdio.h>
#include<math.h>
 void squareroot(int num);
 int main()
 { int num;
     printf("enter a number : ");
 scanf("%d",&num);

     squareroot(num);
     return 0;
 }
void squareroot(int x)
{
    printf("square root is : %f", sqrt(x));
}
