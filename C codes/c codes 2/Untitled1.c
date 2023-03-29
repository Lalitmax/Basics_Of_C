#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("f1.txt", "r");
    if(fp==NULL)
        printf("file not found ");
    return 0;
}
