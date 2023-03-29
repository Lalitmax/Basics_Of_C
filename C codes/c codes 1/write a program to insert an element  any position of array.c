#include<stdio.h>
int  main()
{
    int array[100], value,pos,size;
    printf("enter size of array : ");
    scanf("%d", &size);
    printf("enter numbers \n");
    for(int i=0; i<=size; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("enter position of array :");
    scanf("%d", &pos);
    printf("insert value :");
    scanf("%d", &value);
      size++;

    for(int i =size; i<pos; i--)
    {
        array[i]=array[i-1];
    }
  array[pos-1]=value;
  for(int i=0; i<size; i++)
  {
      printf("%d \t", array[i]);
  }
    return 0;
}
