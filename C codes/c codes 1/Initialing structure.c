
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
    struct student ece[100]={"pandey", 318, 9.2};

  printf("name = %s\n",ece[0].name );
  printf("roll no  = %d\n",ece[0].roll);
  printf("cgpa  = %f\n",ece[0].cgpa );
  return 0;
}
