// Coursera Week 2 Assignment
//Write a program that prints the sine function for an input x between (0, 1)

#include <stdio.h>
#include <math.h>

#define PI 3.14159
int main()
{
  double sinValue, radianVal, degreeVal;
  printf(" Please Enter an Angle in degrees :  ");
  scanf("%lf", &degreeVal);
  
  // Converting Degree Value to Radian 
  radianVal = degreeVal * (PI/180);
  sinValue = sin(radianVal);
  
  printf("\n The Sine value of %lf = %lf ", degreeVal, sinValue);
  
  return 0;
}
