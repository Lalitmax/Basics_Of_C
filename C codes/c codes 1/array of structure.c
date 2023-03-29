#include<stdio.h>
#include<string.h>
struct student
{
    char name[200];
    int roll;
    float cgpa;
};
int main()
{
    struct student ece[100];
     strcpy(ece[0].name, " lalit");
    ece[0].roll=318;
    ece[0].cgpa=9.2;

  printf("name = %s",ece[0].name );
  return 0;
}
