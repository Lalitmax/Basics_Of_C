#include<stdio.h>
int main()
// if even --> 1
// if odd --> 0
{  int num;
    printf("enter a number\n");
    scanf("%d", &num);
    printf("%d",num%2==0);
    return 0;
}


