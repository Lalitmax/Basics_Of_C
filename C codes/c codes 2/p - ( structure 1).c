#include<stdio.h>

struct date
{
    int d,m,y;
};
int main()
{
    struct date today,d1;
    today.d=8;
    today.m=4;
    today.y=2022;
    d1=today;
    printf("enter today's date\n");
    scanf("%d/%d/%d", &d1.d,&d1.m,&d1.y);
    printf("date:  %d / %d / %d", d1.d,d1.m,d1.y);
    return 0;
}
