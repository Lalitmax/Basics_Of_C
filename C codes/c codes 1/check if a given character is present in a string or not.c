#include<stdio.h>
void checkchar(char str[], char ch);
int main()
{
   char str[]= "pandey kumar yadav" ;
   char ch;
   printf("enter you want to check character :  ");
   scanf("%c", &ch);
   checkchar(str, ch);
   return 0;
}
void checkchar(char str[], char ch)
{
    int count=0;
    for(int i=0; str[i] !='\0'; i++)
    {
c        {
          count++;
        }

    }
      printf(" %d character is   present here  " , count  );
}
