#include<stdio.h>
    int sum(int g , int );

int main()
{
    int a,b,c;
    a=9;
    b=87;
    c= sum(a,b);
    printf("the sum is %d\n", c);
    return 0;

}
  int sum(int a, int b)
{
    return a+b;   //yaha a+b ka maan janha se call huaa tha vahi par chala gaya . call huaa tha c=sum(a,b);
}

