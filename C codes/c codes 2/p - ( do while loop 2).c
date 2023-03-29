#include<stdio.h>
int main()

{
    int num, index = 0;
    printf("enter a number\n");
    scanf("%d", &num);
    do
    {
        printf("%d", index +1);
        index = index+1;
    }
    while  ( index <1000);


    return  0;
}
