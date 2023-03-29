#include<stdio.h>
void printhw(int count);
int main()
{ int count;
    printf("enter number to print hw : ");
    scanf("%d", &count);
    printhw(count);
    return 0;

}
void printhw(int count)
{
    if(count==0)
    {
        return;
    }
    printf("hello world \t\t");
    printhw(count-1);

}
