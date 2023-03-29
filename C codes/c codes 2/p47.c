#include<stdio.h>
int main()
{
    void swap (int*, int *);
    int a,b;
    printf("enter two numbers\n");
    scanf("%d %d", &a,&b);
    swap(&a,&b);
    printf("a=%d b=%d", a,b);
    return 0;
}
void swap(int *x, int *y)
{
    int p;
    p=*x;
    *x=*y;
    *y=p;

}
