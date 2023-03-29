#include<stdio.h>
int main()
{
    char str[26];
    printf("enter a string : ");
    fgets(str,26,stdin);
    for(int i='a'; i<='z'; i++)
    {
        int count=0;
        for(int j=0; str[j]!='\0'; j++)
        {
            if(i==str[j])
            {
                count++;
            }
        }
        if(count>0)

        printf("%c fount %d times \n", i,count);
    }
}
