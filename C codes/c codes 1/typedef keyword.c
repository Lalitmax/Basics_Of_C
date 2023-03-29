#include<stdio.h>
#include<string.h>
typedef  struct computerengineeringstudent
{
    char name[200];
    int roll;
    float cgpa;
} cos  ;
int main()
{
     cos s1={"saroj kumar",323 , 6.2};
    printf("student name = %s \n", s1.name);
    printf("student roll = %d \n", s1.roll);
    printf("student cgpa = %f \n", s1.cgpa);
    return 0;
}
