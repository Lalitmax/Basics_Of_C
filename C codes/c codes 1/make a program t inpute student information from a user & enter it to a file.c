#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("test.txt", "w");
    char name[100];
    int roll;
    float cgpa;
    printf("enter your name : ");
    scanf("%s",name);
    printf("enter your roll no : ");
    scanf("%d", &roll);
    printf("enter your cgpa : ");
    scanf("%f", &cgpa);
    fprintf(fptr," Name -> %s\n", name);
    fprintf(fptr," Roll no -> %d\n", roll);
    fprintf(fptr," cgpa  -> %f\n", cgpa);
    fclose(fptr);

    return 0;
}
