#include<stdio.h>
 void swap(int *a,int *b);
 int main()
 { int x =5,y =8;
 swap(&x,&y);
     printf("x=%d \n y=%d", x,y);
     return 0;
 }
void swap(int *a, int *b)
{
    int s;
    s = *a;
    *a=*b;
    *b=s;
}
