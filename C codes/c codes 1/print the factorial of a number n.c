#include<stdio.h>
int main()
{int num;
    printf("enter factorial :");
    scanf("%d", &num);
    int fact=1;
    for(int i =1; i<=num; i++)
    {
        fact = fact*i;
    }
    printf("final foctorial is %d\t", fact);
    return 0;
}
