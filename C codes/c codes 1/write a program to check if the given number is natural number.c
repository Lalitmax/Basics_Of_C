#include<stdio.h>
int main()
{ int num;
    printf(" enter a number :");
    scanf("%d", &num);
    if(num >=1 && num <=100000000000000000000000000000000){
        printf("natural number \n");
    }
    else
    {
        printf("not a natural number ");
    }
    return 0;

}
