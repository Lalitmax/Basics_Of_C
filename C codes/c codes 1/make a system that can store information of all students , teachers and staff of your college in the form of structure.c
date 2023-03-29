#include<stdio.h>
#include<string.h>
 typedef struct college
 {
     char name[200],father[200];
     int roll;
 }sc;
 void studentinf(sc s1);
 void teachersinf(sc t1);
 void staffinf(sc s2);
int main()
{ sc s1={"lalit kumar", "ram sewak yadav"};
      s1.roll=300;
      sc t1={"sumit singh", "ram lal singh", };
      sc s2={"kumaru lal singh", "banti lal singh", };
      studentinf(s1);
      teachersinf(t1);
      staffinf(s2);

      return 0;

}
 void studentinf(sc s1 )
 {
     printf(" 1.  college name ->  s.k college thatia rosera , samastipur\n");
     printf(" 2.   degree -> 11th and 12th \n");
     printf(" 3.  two rooms in this school \n");
     printf(" 4.  first room in 11th child\n 5.  second room 12th child \n");
     printf("    first student -> \n");
     printf(" \n");

     printf(" 6.  student name -> %s\n", s1.name);
     printf(" 7.  student name -> %s\n", s1.father);

     printf(" 8.  student roll no  -> %d\n", s1.roll);

 }
void teachersinf(sc t1)

{
      printf("    teacher info  -> \n");
     printf(" \n");

    printf(" 9.  teacher name -> %s \n", t1.name);
    printf(" 10.  teacher father  name -> %s \n", t1.father);

}
void staffinf(sc s2)
{
       printf("    staff info  -> \n");
     printf(" \n");

    printf("11.  staff name -> %s \n", s2.name);
    printf(" 12.  staff father  name -> %s \n", s2.father);

}
