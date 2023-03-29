
#include<stdio.h>
int main()
{
    int num, i ;
    printf("enter a number \n");
    scanf("%d", &num);
    for ( i =1; i<11; i++)
    {
        printf("%d x %d = %d\n", num, i,  num *i );

    }
    return 0;
}
