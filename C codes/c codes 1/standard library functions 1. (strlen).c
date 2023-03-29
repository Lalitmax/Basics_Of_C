#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    int length ;
    int count;
    printf("enter your name : ");
    fgets(name,100,stdin);
length=strlen(name)-1;
printf("length is : %d",length );
    return 0;


}

