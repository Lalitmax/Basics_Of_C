#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("test.txt", "w");

    fputc('l',fptr);
    fputc('a',fptr);
    fputc('l',fptr);
    fputc('i',fptr);
    fputc('t',fptr);
    fclose(fptr);
    return 0;
}
