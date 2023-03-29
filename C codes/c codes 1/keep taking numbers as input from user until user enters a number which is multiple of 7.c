
#include<stdio.h>
int main()
{
    int n;
    do
    {
        printf("enter a number : ");
        scanf("%d", &n);
        if (n%7 ==0)
        {
            break;
        }
        printf("enterd number is %d\n", n);
    }while(1);
    printf("thenk you");
    return 0;
}
