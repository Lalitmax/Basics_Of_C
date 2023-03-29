#include<stdio.h>
int main()
{
    int exam;

       printf("if you have cleared math then enter 1 \n if you have cleared science then enter 2 \n if you have cleared both mat and science then enter 3 \n");

    scanf("%d", &exam);
    if ( exam==1)
    {
        printf(" your marks is 15");
    }
    else if (exam ==2)
    {
        printf("your marks is 15");
    }
    else if ( exam ==3)
    {
        printf("your marks is 45");

    }
    return  0;
   }
