#include<stdio.h>
int main()
{
    int age;
    printf("enter your age \n");
    scanf("%d", &age);

    switch (age)
    {
        case 3:
        printf(" your age is 3");
        break;
        case 22:
        printf("your age is 22");
        break;
        case 23:
        printf("your age is 23");

        break;
        default :

        printf("your age is not 3,22 or 23");
        break ;

    }

    return 0;

}
