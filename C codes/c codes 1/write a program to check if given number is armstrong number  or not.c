#include<stdio.h>
#include<math.h>
int main()
{ int a,b,c, sum;                                    // 153
    printf(" enter any number : ");
    scanf("%d%d%d",&a,&b,&c);

    if ( 153  ==  pow(a,3)+ pow(b,3)+ pow(c,3))
    {
        printf("armstrong number\n");
    }
    else
    {
          printf(" not armstrong number\n");
}
return 0;
}
