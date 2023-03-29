#include<stdio.h>
int main()
{
    int age, marks;
    printf("enter your age\n ");
    scanf("%d", &age);
    printf("enter your marks\n");

    scanf("%d", &marks);

    switch (age)
    {
    case 3:
        printf("your age is 3\n");
        switch (marks)
        {
    case 45:
        printf("your marks are 45\n");
break ;
    default:
        printf("your marks i s not 45\n");

    }

    break;
    case 23:
        printf("your age is 23\n");
        break ;
  default:
        printf("your age is not 3 or 23");

    }

    return 0;
}
