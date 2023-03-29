#include<stdio.h>
int main()
{int n;
    printf("how much do you want to print fibonacci number :  ");
    scanf("%d", &n);
    for (int i=0; i<=n; i++)
    {

        if(i==0)
        {
            return 0;
        }
        else if(i==1)
        {
            return 1;
        }
        int s=((i-1) + (i-2));
        printf("%d", s);
    }
    return 0;
}
