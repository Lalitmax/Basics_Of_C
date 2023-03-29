#include<stdio.h>
int main()
{
    int a[5];
    input(a);
    display(a);
    sort(a);
    display(a);
return 0;

}
void input(int *p)
{
    int i ;
    for(i=0; i<=4; i++)
        scanf("%d", p+i);
}
void display(int *p)
{
    int i;
    for(i=0; i<=4; i++)
        printf("%d   ", *(p+i));
}
void sort(int*p)
{
    int around,t,i;
    for(around=1; around<=4; around++)
    {
        for (i=0; i<4-around; i++)
            if (*(p+i) > *(p+i+1))
        {
            t=*(p+i);
            *(p+i)=*(p+i+1);

         *(p+i+1) = t;


        }
    }
}
