#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("test.txt", "r");
    char str[200];
    fscanf(fptr, "%s", str);
    for(int i=0; str[i]!='\0'; i++)
    {
          printf("%c", str[i]);
    }
  fclose(fptr);
  return 0;
}
