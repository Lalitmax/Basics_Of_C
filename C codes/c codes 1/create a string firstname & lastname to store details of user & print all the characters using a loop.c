#include<stdio.h>
void printchar(char array[]);
int main()
{ char  firstname[]= "lalit";
    char  secname[]= "kumar";
    printchar( firstname);
    printchar( secname);
    return 0;
}
void printchar(char array[])
{
    for(int i=0; array[i] !='\0'; i++)
    {
        printf("%c ", array[i]);
    }
    printf("\n");
}
