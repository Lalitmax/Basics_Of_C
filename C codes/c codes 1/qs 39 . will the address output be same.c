#include<stdio.h>
void printaddress(int a);
int main()
{
    int a=5;
      printf("the addres is =%u \n" ,&a);

    printaddress(a);
   return 0;
}
void printaddress(int a)
{
    printf("the addres is = %u\n", &a);
}
//    answer = output is not same
