#include<stdio.h>

int main()
{
    int lalit, index = 0;
    printf("enter a number\n");
    scanf("%d", &lalit);
    do
    {
        printf("%d\t", index++  );
        index = index +1;

}
while ( index < lalit);

return  0;

}
