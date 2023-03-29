#include<stdio.h>
int main()
{ int n;
do{
    printf("enter a number : ");
    scanf("%d", &n);
    if(n%2  !=0)
    {
        break;
    }
        printf("enter number is %d",n);
    }while(1);
    printf("thank you");

    return 0;
}
