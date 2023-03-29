#include<stdio.h>
#include<string.h>

// user defined
struct student
{
    char name[200];
    int roll;
    float cgpa;
};
int main()
{
    struct student d1;
    strcpy(d1.name,"lalit kumar");
    d1.roll = 318;
    d1.cgpa=9.3;
    printf(" 1 student name  = %s\n", d1.name);
    printf(" 1 student name  = %d\n", d1.roll);
    printf(" 1 student name  = %f\n", d1.cgpa);

    printf("\n");

      struct student d2;
 strcpy(d2.name, " rahul kumar");
 d2.roll=310;
 d2.cgpa=8.2;
 printf("2 student name = %s \n", d2.name);
 printf("2 student name = %d\n", d2.roll);
 printf("2 student name = %f \n", d2.cgpa);

        printf("\n");
          struct student d3;
          strcpy(d3.name, " Raushan kumar");
          d3.roll= 300;
          d3.cgpa=7.2;
          printf("3 student name = %s \n", d3.name);
          printf("3 student name = %d \n", d3.roll);
          printf("3 student name = %f \n", d3f .cgpa);

     return 0;


}
