#include<stdio.h>
int main()
{
    char fullname[30];
   printf("enter your full name ");
   fgets(fullname,1234,stdin);
   //gets(fullname);
   puts(fullname);
    return 0;
}
