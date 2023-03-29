#include<stdio.h>
#include<string.h>
struct complex
{
    int real,img;
};
int main()
{
    struct complex number1={3,5};
    struct complex *ptr=&number1;
    printf("real part = %d \n",ptr->real);
    printf("img part = %di \n",ptr->img);
    return 0;
}
