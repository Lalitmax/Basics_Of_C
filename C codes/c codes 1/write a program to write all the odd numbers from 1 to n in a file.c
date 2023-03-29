#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("secondtest.txt", "w");
     int n;
    printf("enter a number you want to odd number betweenn 1 to n : ");
    scanf("%d", &n);
    for(int i=0; i<=n; i++)
    {
       if(i%2 !=0)
       {

          fprintf(fptr,"%d\t\t", i);
       }

    }

    fclose(fptr);
    return 0;
}
