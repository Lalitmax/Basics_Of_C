typedef struct student
{
    int  rollno;
    char name[20];
    int age;
}STUDENT;
void main()
{
    STUDENT s1;
    s1.rollno=23;
    strcpy(s1.name,"lalit");
    s1.age=20;


}
