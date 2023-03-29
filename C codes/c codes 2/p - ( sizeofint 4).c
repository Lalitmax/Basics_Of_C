#include<stdio.h>
int main()
{
    int x,y,z;
    x= sizeof(34);
    y= sizeof(8.37);
    z= sizeof('a');
    printf("%d\n%d\n%d", x,y,z);
    return 0;
}
