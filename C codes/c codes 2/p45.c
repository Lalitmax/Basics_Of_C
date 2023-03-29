#include<stdio.h>
int main()
{
    int a;
    printf("how many numbers do you want to average\n");

    scanf("%d", &a);
    int c[a], b,sum=0;
    float avg;
    printf("enter %d numbers\n", a);
   for(b=0; b<a; b++)
    scanf("%d", &c[b]);
    for(b=0; b<a; b++)
        sum = sum +c[b];
        avg=sum/a;
        printf("average=%f", avg);
        return 0;
}
