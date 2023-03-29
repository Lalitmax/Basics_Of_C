#include<stdio.h>

union item
{
    int x; float y;  char z;
};
void main()
{
    union item  b1;
    b1.x=34;
    printf("\n x=%d", b1.x);
    b1.y=23.3;
    printf("\n y= %f", b1.x);
    b1.z='a';
    printf("\n z=%c",b1.z);
return 0;

}

