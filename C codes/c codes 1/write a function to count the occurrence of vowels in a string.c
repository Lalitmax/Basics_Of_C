#include<stdio.h>
void countvowels(char str[]);
int main()
{
    char str[100];
    char ch;
    printf("enter a string : ");
    scanf("%s",str);
    countvowels(str);
    return 0;
}
void countvowels(char str[])
{  int count=0;
    for(int i=0; str[i] !='\0'; i++)

    {
        if(str[i] =='a' || str[i] =='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
            {
                count++;
            }

    }
printf("%d", count);
}
