#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("newtest.txt", "w");
    if(fptr==NULL)
    {
        printf("file doesn't exist\n");

    }
    else{
           fclose(fptr);

    }
  return 0;
}
