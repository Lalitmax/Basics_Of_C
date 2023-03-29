#include<stdio.h>
void ascending(int str[]);
int main()
{
    int str[]={4,3,6,5,3,2,1,7,8,6,55,33,22,11,'\0'};
    ascending( str);

     for(int i=0; str[i]!='\0'; i++ )
      {
          printf("%d\n ", str[i]);
      }
      return 0;
}
void ascending(int str[])
{
    for(int i=0; str[i]!='\0'; i++)
    {
        for(int j=i+1; str[j]!='\0'; j++)
        {
            if(str[i]<str[j])
            {
                int temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }


    }

}

