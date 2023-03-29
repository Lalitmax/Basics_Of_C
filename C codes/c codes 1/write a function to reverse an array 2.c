#include<stdio.h>
 void reverse(int arr[]);
void printvalue(int arr[]);
int main()
{
    int arr[]= {1,2,3,4,5,6,7,8,9};

     reverse(arr);
printvalue(arr);

    return 0;
}
void printvalue(int arr[])
{
    for(int i=0; i<9; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
void reverse(int arr[])
{
    for(int i=0; i<9/2; i++)
    {
        int firstvalue = arr[i];
        int secondvalue=arr[9-i-1];
     arr[i] =secondvalue;
     arr[9-i-1]=firstvalue;

    }

}
