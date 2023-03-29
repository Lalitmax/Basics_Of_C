#include<stdio.h>
#include<string.h>
typedef struct address
{
    int houseno,block;
char city[200],state[200];
}ad;
int main()
{  ad p1={45,55,"samastipur","bihar"};
    printf("first person = \n");
    printf("house no = %d\n",p1.houseno);
    printf("block no = %d\n",p1.block);
    printf("city no = %s\n",p1.city);
    printf("state no = %s\n",p1.state);
    printf("\n");

    ad p2={46,56,"begusarai","bihar"};
    printf("second  person = \n");
    printf("house no = %d\n",p2.houseno);
    printf("block no = %d\n",p2.block);
    printf("city  = %s\n",p2.city);
    printf("state  = %s\n",p2.state);
      printf("\n");

    ad p3={47,57,"mujaffarpur","bihar"};
    printf("fthird person = \n");
    printf("house no = %d\n",p3.houseno);
    printf("block no = %d\n",p3.block);
    printf("city  = %s\n",p3.city);
    printf("state  = %s\n",p3.state);
      printf("\n");

    ad p4={48,58,"patna","bihar"};
    printf("fourth person = \n");
    printf("house no = %d\n",p4.houseno);
    printf("block no = %d\n",p4.block);
    printf("city  = %s\n",p4.city);
    printf("state  = %s\n",p4.state);
      printf("\n");

    ad p5={49,59,"darbhanga","bihar"};
    printf("five person = \n");
    printf("house no = %d\n",p5.houseno);
    printf("bloak no = %d\n",p5.block);
    printf("city  = %s\n",p5.city);
    printf("state  = %s\n",p5.state);
    return 0;


}
