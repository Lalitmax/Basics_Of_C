
#include<stdio.h>
int main()
{
    int i;
    FILE *fp;
    char s[] = "hello student";
    fp = fopen("f1.txt", "w");
    if(fp==NULL)
    {
        printf("file can not open");
        exit(1);
    }
    for(i=0; i<strlen(s); i++)
        fputc(s[1], fp);
    fclose(fp);
    getch();
}
