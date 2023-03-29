#include<stdio.h>
int main()
{
    add();
    return 0;
}
add()
{
    int a,b,c;
    printf("enter two number\n");
    scanf("%d%d", &a,&b);
    c = a+b;
    printf("the sum is %d\n", c);

}
