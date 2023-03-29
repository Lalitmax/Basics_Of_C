#include<stdio.h>
int main()
{
    char s[3][10];
    int i;
    printf("enter three string name\n");
    for(i=0; i<3;i++)
        gets(s[i]);
    for (i=0;i<3;i++)
        printf("%s\n",s[i]);
    return 0;
}
