#include<stdio.h>
int main()
{
    int x=5, *p, **q, ***r;
    *p = 8;
    p =&x;
    q=&p;
    r=&q;
    printf("%d \n %u\n%u\n%u", x,p,q,r);
    return 0;
    }
