#include<stdio.h>
#include<string.h>
 typedef struct vectors
{
    int x;
    int y;
}sv;
void calsum( sv v1, sv v2, sv sum);
int main()
{
    sv v1={3,10};
    sv v2={3,7};
    sv sum={0};
    calsum(v1,v2,sum);
    return 0;

}
void calsum( sv v1, sv v2, sv sum)
{
    sum.x=v1.x+v2.x;
    sum.y=v1.y+v2.y;
    printf("sum of X = %d\n",sum.x);
    printf("sum of y = %d\n",sum.y);
}
