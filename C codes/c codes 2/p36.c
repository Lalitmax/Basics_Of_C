#include<stdio.h>
int main()
{
    int i , j, row ,col;
    row=5;
    col=6;
    for(i=0; i<=row; i++)
    {
        for(j=0; j<=col; j++)
        {
            if(i==0 &&  j%3 != 0 || i==1 && j%3==0 || i-j==2 || i +j ==8)

        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
    }
    printf("\n");
    }

return 0;
}

