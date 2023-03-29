#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("test.txt", "r");
    char str[200];
    fscanf(fptr,"%s", str);
     fptr=fopen("test.txt", "w");
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {

            fprintf(fptr, "%d", i);
        }
        else
        {
             fprintf(fptr, "%c", str[i]);
        }
    }
    fclose(fptr);
    return 0;
}
