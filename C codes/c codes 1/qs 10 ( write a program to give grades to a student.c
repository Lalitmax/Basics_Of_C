#include<stdio.h>
int main()
{ int marks;
    printf("enter your marks :");
    scanf("%d", &marks);
    if(marks<30){
        printf("C grades\n"); }
        else if (marks >=30 && marks <=70){
            printf("B grades\n");   }
     else if (marks >=70 && marks <=90){
        printf("A grades\n");  }
        else if ( marks >=90 && marks <=100){
            printf("A+ grades");
        } return 0;

}
