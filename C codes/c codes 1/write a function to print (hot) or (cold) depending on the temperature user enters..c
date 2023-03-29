#include<stdio.h>
 void checkcoldtemp();
 void checkhottemp();
 int main()
 {   float temp;
     printf("enter temperature : ");
     scanf("%f", &temp);
     if(temp>=0 && temp<=20 )
     {
         checkcoldtemp();
     }
     else
     {
         checkhottemp();
     }
     return 0;
 }
checkcoldtemp(int temp)
{
    printf("cold temperature \n");
}
void checkhottemp()
{
     printf("hot temperature \n");
}
