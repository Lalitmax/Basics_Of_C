#include<stdio.h>
int main()
{
    int k ,y;
    k = fun(3);
    y = fun(9);

    printf("%d\n%d",k,y);
}
int fun(int a)
{
    int s;
    if(a==1)
        return (a);
        s = a+fun(a-1);
    return (s);
}
