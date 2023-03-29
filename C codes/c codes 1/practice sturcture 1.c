#include<stdio.h>
#include<string.h>
// user defined
struct student
{
    int roll;
    float cgpa;
    char name[200];
};
int main()

{
    struct student s1;
    s1.roll=318;
    s1.cgpa=9.1;
    //s1.name="lalit";  not valid;
    strcpy(s1.name, "lalit");

     printf("student name = %s\n", s1.name);
     printf("student roll no = %d\n", s1.roll);
     printf("student cgpa  = %f \n", s1.cgpa);
    return 0;
}
