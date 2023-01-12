//conversion of cartesian coordinates to polar coordinates

#include <stdio.h>
#include <conio.h>
#include <math.h>

#define PI 3.141592

int main(){

  //x,y,r,theta
  float x,y,r,theta;

  printf("Enter the x coordinate: ");
  scanf("%f",&x);

  printf("Enter the y coordinate: ");
  scanf("%f",&y);

  r = sqrt(x*x + y*y);
  theta = atan(y/x);
  theta = theta * 180/PI;

  printf("The polar coordinates are: r = %0.2f and theta = %0.2f",r,theta);
  getch();//holds screen

  return 0;

}
