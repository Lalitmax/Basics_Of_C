#include<stdio.h>
int main()
{
    int num;

float b=1000;

    printf("if you want to conver km to miles then enter 1\n if you want to conver km to m then enter 2\nif you want to convert inches to foot then enter 3\n if you want to convert cms to inches then enter 4\n if want to convert pound to kgs then enter 5\n if you want to convert inches to meters then enter 6\n" );
    scanf("%d", &num);
    if ( num==1 )
    {
          float a= 0.62;
        printf("enter   number\n");
        scanf("%d",&num);
        printf("the value of %d km = %f miles\n", num, num*a);

    }
if (num==2)
    {
        float b=1000; //km to meters
     printf("enter   number\n");
        scanf("%d",&num);
        printf("the value of %d km = %f meters\n", num, num*b);

    }
if (num==3)
    {
        float  c = 0.08333; //inches to foot
     printf("enter  number\n");
        scanf("%d",&num);
        printf("the value of %d inches  = %f foot\n", num, num*c);

    }
if (num==4)
    {
        float d= 0.393; //cm to inches
     printf("enter   number\n");
        scanf("%d",&num);
        printf("the value of %d cm = %f inches\n", num, num*d);

    }

if (num==5)
    {
        float e= 0.45;  // pound to kgs
     printf("enter   number\n");
        scanf("%d",&num);
        printf("the value of %d pound = %f kgs\n", num, num*e);

    }
    if (num==6)
    {

        float f= 0.0254;  // inches to meter
     printf("enter   number\n");
        scanf("%d",&num);
        printf("the value of %d inches = %f meters\n", num, num*f);

    }




    return 0;
}

