#include<stdio.h>
#include<math.h>
float areacircle(float red);
float areasquare(float side);
float arearactangle(float sides);
int main()
{
    float red=3.1, side=2.0, sides=4.1;
  printf(" area of circle is : %f \n",areacircle(red));
 printf("area of square is : %f\n", areasquare(side));
 printf(" area of ractangle is : %f",arearactangle(sides));
    return 0;
}
    float areacircle(float red)
    {
        return 3.14*red*red;
    }

float areasquare(float side){
return side*side;
}

float arearactangle(float sides){
return sides*sides;
}
