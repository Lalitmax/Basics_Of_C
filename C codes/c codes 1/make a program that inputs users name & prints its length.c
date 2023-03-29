#include<stdio.h>
int main()
{
    char name[100];
    int count;
    printf("enter your name : ");
    fgets(name,100,stdin);

    for(int i=0; name[i] !='\0' ;i++)
    {
        if(name[i]!= ' ')
        {
                count++;
        }
    }
    count--;            printf("%d", count);
    return 0;


}
