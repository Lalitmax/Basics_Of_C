#include<stdio.h>
int main()
{
    int i;
    printf("enter your marks\n");
    printf("if you have passed maths then enter 1\n");
    printf("if you have passed science then enter 2\n");
    printf("if you have passed both(maths and science) then enter 3\n");
     scanf(" %d", &i);

    if (i==1)
    {
    printf("your marks are 15");
    }
    else if  (i==2)
    {
         printf("your marks are 15");
    }
 else if  (i==3)
    {
         printf("your marks are 45");
    }
    return 0;

}
