#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character : ");
    scanf("%c", &ch);
    if (ch >= 'A'  && ch <='Z'){
        printf("upper case\n");
    }
    else if( ch >='a' && ch<='z')

        {printf("lower case\n");}
    {
        printf("not English letter");
    }
    return 0;
}
