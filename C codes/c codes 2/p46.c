#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    printf("enter nine numbers\n");
    for(i=0; i<=9; i++)
    for(j=0; j<=9; j++)
    scanf("%d", a[i][j]);

    for(i=0; i<=9; i++)
    {
for(j=0; j<=9; j++)

    printf("%d", a[i][j]);
    }
    return 0;


}
