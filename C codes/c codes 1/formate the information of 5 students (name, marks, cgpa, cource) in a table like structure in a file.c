#include<stdio.h>
#include<string.h>
 struct student
 {
     char name[200],course[200];
     int marks;
     float cgpa;

 };
 void studentinfo(struct student s1, int i);
int main()
{
    for(int i=0; i<5; i++){

     struct student s1;
char ch[200], cour[200];
int n;
float f;
    printf("enter your name : ");
  scanf("%s",ch );
  strcpy( s1.name,ch);
  printf("enter your marks: ");
  scanf("%d", &n);
  s1.marks=n;
  printf("enter your cgpa: ");
  scanf("%f", &f);
  s1.cgpa=f;
  printf("enter your course: ");
  scanf("%s",cour);
  strcpy(s1.course, cour);
   studentinfo(s1,i);

    }


  return 0;
}
void studentinfo(struct student s1, int i)
{


    FILE *fptr;
    fptr=fopen("test.txt", "a");
    fprintf(fptr,"%d. student \n", i+1);
    fprintf(fptr," (i).  student name -> %s\n", s1.name);
    fprintf(fptr," (ii).  student marks -> %d\n", s1.marks);
    fprintf(fptr," (iii).  student cgpa -> %f\n", s1.cgpa);
    fprintf(fptr," (iv).  student course -> %s\n", s1.course);
fclose(fptr);

}
