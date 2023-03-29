
#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    float cgpa;
    char name[200];
};
int main()
{
    struct student d1={318, 9.2,  "lalit pandey"};
    struct student *ptr=&d1;
    printf("student ->roll = %d\n", ptr->roll);
    printf("student ->cgpa = %f\n", ptr->cgpa);
    printf("student ->name = %s\n", ptr->name);
    return 0;


}
