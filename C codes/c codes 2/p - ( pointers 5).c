#include<stdio.h>

int main()

{
    int a,b;
    printf("enter two numbers\n");
    scanf("%d %d", &a,&b);

    swap(&a,&b);
    printf("a=%d b=%d" , a,b);
    return 0;
}
void swap(int *x, int *y)
{
    int t;
    t=*x;
    *x= *y;
    *y=t;

}
