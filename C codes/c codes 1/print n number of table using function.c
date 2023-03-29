#include<stdio.h>
void prttable(int num);
int main()
{ int num;
    printf("enter a number :");
    scanf("%d",&num);

    prttable(num);
    return 0;
}
void prttable(int x)
{
    for(int i=1; i<=10; i++)
    {
        printf("%d \t", i*x);
    }
}

