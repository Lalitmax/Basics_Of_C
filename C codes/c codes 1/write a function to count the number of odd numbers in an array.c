#include<stdio.h>
void countodd(int count[]);
int main()
{
    int count[]={1,2,3,4,5,6,8,9,3,7,77,11,33,55,99};
    countodd(count);
    return 0;
}
void countodd(int count[])
{
      int       c=0;
    for(int i=0; i<17; i++)
    {

        if(count[i]%2 !=0)
        {
            c++;
        }

    }

  printf("%d\n\t", c);
}
