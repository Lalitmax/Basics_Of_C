#include<stdio.h>
int main()
{
    int x=6;
    int *ptr;
    int **pptr;
    ptr=&x;
    pptr=&ptr;
    printf("%d\n", *ptr); // value
    printf("%u\n", ptr); // address
    printf("%u\n", *pptr); // address
    printf("%d\n", **pptr); // value
    return 0;
}

