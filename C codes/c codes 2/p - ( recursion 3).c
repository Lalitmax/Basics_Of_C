#include<stdio.h>
int main()
{
    int fun(int );
    int k ,y;                                                         // maine do baar call kiya hai  this program  //
    k = fun(23);
    y=  fun(2);

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

