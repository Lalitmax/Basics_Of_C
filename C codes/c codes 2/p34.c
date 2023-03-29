#include<stdio.h>
int main()
{
    int t, i;
    printf("enter a number\n");
    scanf("%d", &i);
    for(t=0; t<=i; t=t+1)
    {
        printf("%d\t\t", t);
    }
    return 0;
}
