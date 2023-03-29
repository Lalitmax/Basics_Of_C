#include<stdio.h>
int main()
{  int arr[20]={12,34,2322,54,78};
int largest=0;
    for(int i=0; i<20; i++)
    {
        if(arr[i]>largest)
        {
            largest =arr[i];
        }
    }
    printf(" the largest number is %d", largest);
    return 0;
}
