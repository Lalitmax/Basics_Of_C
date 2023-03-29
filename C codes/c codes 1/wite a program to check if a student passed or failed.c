#include<stdio.h>
int main()
{ int marks;
    printf("enter your marks :");
    scanf("%d", &marks);
   /* if(marks >=0 && marks <=30  )
         {
    printf("fail\n"); }
  else if(marks >=30 && marks <=100 )   {
      printf("passed\n");}
   else { printf("wrong marks");   } */
    // use ternary operator
    marks >=30 ? printf(" passed\n") : printf("fail");
   return 0;
}
