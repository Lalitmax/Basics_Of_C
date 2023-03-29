#include<stdio.h>
int main()
{

    // jise initialized nahi kiya jata hai wild pointer kahlata hai
    // example - int a;
    // yaha par a ko sirph declare kiya hai initialized nahi
    char *ptr,*fptr,a,b;
ptr=&a;
fptr=&b;
    printf(" %u %u", ptr, fptr);

    return 0;
}

