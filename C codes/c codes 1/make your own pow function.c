#include<stdio.h>
#include<math.h>
int cltpower(int num);
int main()
{
  int num;
  printf("enter a number : ");
  scanf("%d", &num);
  printf("%d power is : %d", num, cltpower(num));
  return 0;

}
int cltpower(int num)
{
   return pow(num,2);
}
