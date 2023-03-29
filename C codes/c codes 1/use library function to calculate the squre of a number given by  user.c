#include<stdio.h>
#include<math.h>
void cltsquare(int num);
int main()
{int num;
    printf("enter a number : ");
    scanf("%d", &num);
    cltsquare(num);
    return 0;
}
void cltsquare(int x)
{

    printf("%d of square %f\n",x,pow(x,2));
}
