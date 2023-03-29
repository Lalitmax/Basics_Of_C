#include<stdio.h>
int main()
{
    int j,i,sum=0 , num;
    printf("enter n natural numbers : ");
    scanf("%d", &num);
   for ( j=num;  j >=0 ; j--){
    sum=sum+j;
     printf("%d\n", j);
   }
   printf("%d\n", sum);
  /* for (i =num; i>=0; i--)
   {
       printf("%d", i);
   }
*/
   return 0;
}
