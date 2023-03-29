#include<stdio.h>
void cltprice(float value);
int main()
{float  value;
    printf("enter price value : ");
    scanf("%f", &value);
    cltprice(value);
    printf("value is : %f ", value);
    return 0;
}
void cltprice(float value)
{
    value=value+ (0.18*value);
    printf("final value is : %f\n", value);
}
