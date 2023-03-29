#include<stdio.h>
int sum(int num);
int main()
{
    int num=20;

    printf("first n natural no of sum is : %d ", sum(num));

    return 0;
}
int sum(int num)
{    if(num==1)
{
    return 1;
}
 int    sumnm1= sum(num-1);
 int s=sumnm1+num;
 return s;

}
