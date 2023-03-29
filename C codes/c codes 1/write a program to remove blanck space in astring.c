#include<stdio.h>
int main()
{
    char str[]="lalit kumar yadav bhorha";
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]==' ')
        {
            for(int j=i; str[j]!='\0'; j++)
            {
                str[j]=str[j+1];
            }
        }
    }
    printf("%s", str);
    return 0;
}
