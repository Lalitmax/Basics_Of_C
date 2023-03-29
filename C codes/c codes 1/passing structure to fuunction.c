#include<stdio.h>
#include<string.h>
struct student
{
    char name[200];
    int roll;
    float cgpa;
};
void printinfo(struct student s1);
int main()
{
    struct student s1={"lalit kumar " , 377, 9.34};
    printinfo(s1);
    return 0;
}
void printinfo(struct student s1)
{
    printf("student name = %s \n", s1.name);
    printf("student roll = %d \n", s1.roll);
    printf("student cgpa = %f  \n", s1.cgpa);
}
