#include<stdio.h>
 void convert(char str[]);
int main()
{
    char str[200];
    printf("enter all lower vowels case : ");
    fgets(str,200,stdin);
    convert(str);
    return 0;
}
void convert(char str[])
{
    for (int i=0; str[i] !='\0'; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i] -32;

    }

}
   printf("%s", str);

}
