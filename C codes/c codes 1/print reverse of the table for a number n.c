#include<stdio.h>
int main()
{int num;
    printf("enter  a number  :");
    scanf("%d", &num);
    for(int i=10; i>=1; i--){
        printf("%d\t", i*num);
    }
    return 0;

}
