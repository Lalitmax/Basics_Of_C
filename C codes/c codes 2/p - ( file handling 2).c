#include<stdio.h>
int main()
{
    int i;
    FILE *fp;
    char s[100];
    fp=fopen("f1.txt" ,"w");
    if(fp==NULL)
    {
        printf ("file can not open");
        exit(1);
    }
    printf("enter a string");
    gets(s);
    for (i=0; i<strlen(s); i++)
        fputc(s[1],fp);
    getch();
    fclose(fp);
    getch();
}
