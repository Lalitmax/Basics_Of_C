#include<stdio.h>
int main()

{
    int number , index = 0;
    printf("enter a number ");
    scanf("%d", &number);
    do
    {
        printf("%d", number +1);
        index = index+ 1;

    }

    while ( index <number);

    return 0;
}

