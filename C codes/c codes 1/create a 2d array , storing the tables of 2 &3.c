#include<stdio.h>
 void storetable(int arr[][10], int n, int m, int number);
 int main()
 {
     int arr[2][10];
     storetable(arr,0,10,2 );
     storetable(arr,1,10,3);
     for(int i=0; i<10; i++)
     {
         printf("%d\t", arr[0][i]);
     }
     printf("\n");
 for(int i=0; i<10; i++)
     {
         printf("%d\t", arr[1][i]);
     }
     return 0;
 }
 void storetable(int arr[][10], int n, int m, int number)
 {
     for(int i=0; i<m; i++)
     {
         arr[n][i]=number *(i+1);
     }

 }
