#include<stdio.h>
int main()
{
    char str[50];
    FILE *fp;
    fp=fopen("f2.txt", "r");

    fclose(fp);
}
