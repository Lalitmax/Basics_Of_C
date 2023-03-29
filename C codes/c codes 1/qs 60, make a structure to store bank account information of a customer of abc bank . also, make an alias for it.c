#include<stdio.h>
#include<string.h>
 typedef struct bankaccount
{
    char name[200];
    int accno;

}ba;
int main()
{
  ba ch={"lalit kumar yadav ", 39};

  printf("bank account name = %s\n", ch.name);
  printf("bank account number = %d", ch.accno);
    return 0;
}
