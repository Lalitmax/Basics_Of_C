#include<stdio.h>

int main()
{
    int age;
    printf("enter your age\n");
    scanf("%d", &age);
    switch(age)
    {
    case 11:
        printf("your age is 11\n");

     //   break ;
                                                                                    // if i don't use break staement then next case will print

        case 22:
        printf("your age is 22\n");
        break ;
                                                                                     // if i use break statement then next case will not print
        case 33:
        printf("your age is 33\n");

        break;

        default :

            printf("your age is not 11 , 22 or 33\n");

    }

    return 0;
}
