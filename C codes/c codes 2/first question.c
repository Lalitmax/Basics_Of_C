
   /*print type of gipt you are giving to them
maths and science = 45
science =15
maths =15
*/
#include<stdio.h>
int main()
{
    int  subject;

    printf("enter your passed subject\n example\n");
    printf("if you have passed maths then enter 1 \n");
    printf("if you have passed science then enter 2 \n");
    printf("if you have passed both  (maths and sience) then enter 3 \n");

    scanf("%d", &subject);
    if(subject==1)
        printf("congratulations your maths marks are 15");
    else if (subject==2)
          printf("congratulations your science marks are 15");
    else if (subject==3)
          printf("congratulations your maths and science  marks are 45");
    return 0;
}
