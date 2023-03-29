#include<stdio.h>
int main()
{ int n=0,num;
    printf("enter number : ");
    scanf("%d", &num);
    while(n<=num)
    {
        printf("%d\n",  n++);
    }
    return 0;
}
