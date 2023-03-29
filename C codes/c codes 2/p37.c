#include<stdio.h>
int  main()
{
    int num,a,b;

    printf("1\ add number of two\n");
    printf("2\ chakes odd and even number\n");
    printf("3\ exit\n");
scanf("%d",&num );
switch (num)
{
case 1:

    printf("enter two number\n");
    scanf("%d %d", &a,&b);
    printf(" %d + %d = %d", a, b,a+b);

    break;
    case 2:
    printf("enter a number\n");
    scanf("%d",&a);
    if(a/2==(a+1)/2 )
        printf("even number\n");
    else
        printf("odd number");



     return 0;

}
}
