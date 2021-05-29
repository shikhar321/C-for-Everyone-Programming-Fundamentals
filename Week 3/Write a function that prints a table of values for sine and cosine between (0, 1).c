//Week 3 Assignment
//Write a function that prints a table of values for sine and cosine between (0, 1)
#include <stdio.h>
#include <math.h>

#define PI 3.14159
int main()
{
double sinValue, cosValue, radianVal, degreeVal, interval;

// Converting Degree Value to Radian 
radianVal = degreeVal * (PI/180);
sinValue = sin(radianVal);
cosValue = cos(radianVal);

int i;
for(i = 0; i <30; i++)
    {
        interval = i/10.0;
        printf("sinValue( %lf ) = %lf \t", interval, fabs(sin(interval)));
        printf("cosValue( %lf ) = %lf \t\n", interval, fabs(cos(interval)));
    }
    
printf("\n+++++++\n");
return 0;
}
