#include<stdio.h>

int main()
{
    int a;
    a=sum(3);
    printf("%d",a);
}
int sum(int p)
{
    int s;
    if(p==1);
    return(p);
    s=p+sum(p-1);
    return(s);
}
