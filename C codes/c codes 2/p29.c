#include<stdio.h>
int main()
{
    int a[3],i, sum=0;
    printf("enter 3 numbers\n");
    for (i=0; i<3; i++)
        scanf("%d",&a[i] );
    for(i=0; i<3; i++)
        sum=sum+a[i];
    printf("the sum is %d\n", sum);

    return 0;
}
