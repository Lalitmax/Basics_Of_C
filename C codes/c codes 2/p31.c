#include<stdio.h>
int main()
{
    int x=5;
    printf("%d\n", x);
    printf("%d\n", &x);
    printf("%d\n", *&x);   // *& cut jata hai and x print ho jata hai

    return 0;
}
