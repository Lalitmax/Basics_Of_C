#include<stdio.h>
int main()
{
    int arr[]={2,4,55,67,55,44,55,2,55,};
    int x=4;
    int count;
    for(int i=0; i<9; i++)
    {
        if(arr[i]==55)
        {
            count++;
        }
    }

    printf("%d", count);

}
