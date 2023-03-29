/*#include<stdio.h>
int main()
{
    void iseven(void);
    iseven();
    return 0;
}
void iseven()
{
    int a;
    printf("enter number \n");
    scanf("%d", &a);
    if(a%2==0)
        printf("even");
    else
        printf("odd");

}

#include<stdio.h>
int main()
{
    int x,y;
    void add(int , int );
    printf("enter two numbers\n");
    scanf("%d %d",&x,&y );
    add(x,y);
    return 0;
}
void add(int x, int y)
{
    int c;
    c=a+b;
    printf("a+b=%d", c);
}

#include<stdio.h>
int main()
{
    int s;
    int add(void);
    s=add();
    printf("the sum is %d\n",s);
    return 0;
}
int add()
{
    int a,b,c;
    printf("enter two numbers\n");
    scanf("%d %d", &a,&b);
    c=a+b;
    return(c);

}

*/
#include<stdio.h>
int main()
{
  int a,b,c;
  int add(int ,int );

  printf("enter two numbers \n");
  scanf("%d%d ", &a,&b);
       c=add(a,b);
  printf("the sum is %d\n", c);
  return 0;


}
int add(int x, int y)
{
    int z;
    z=x+y;
    return(z);
}



