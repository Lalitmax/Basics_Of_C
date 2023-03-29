#include<stdio.h>
main()
{       int a;
    printf("if you want to add two number then enter 1\n");
    printf("if you want to checks odd even  number then enter 2\n");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        add();
        break ;
    case 2:
        oddeven();
    }

   return 0;
}
add()
{
    int a,b,c;
    printf("enter two number \n");
    scanf("%d %d", &a,&b);
    c=a+b;
    printf("%d + %d = %d \n", a,b,a+b);

}
oddeven()
{
    int a;
    printf("enter a number for chackss even or odd \n");
    scanf("%d", &a);
    if(a%2==0)
    {
        printf("even number");
    }
    else
    {
        printf("odd number ");
    }

}
