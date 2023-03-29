#include<stdio.h>
int main()
{
    char str[]="lalit kumar yadav";
   for(int j=0; str[j]!='\0'; j++)
    {

    if(str[j]>='a' && str[j]<='z')
    {
        str[j]=str[j]-32;
    }

}
printf("%s", str);
return 0;
}
