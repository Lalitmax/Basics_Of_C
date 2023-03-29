#include<stdio.h>
int main()
{
    int array[100], value,size;
    printf("enter size of array :");
    scanf("%d", &size);
    printf("enter numbers \n");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }
    size++;
   printf("insert value : ");
   scanf("%d", &value);
   array[size-1]=value;
   for(int i=0; i<size; i++)
   {
       printf("%d\t",array[i] );
   }
   return 0;
}
