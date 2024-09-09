//********************************************************
// fracture.c
// Author/UCF ID: Sebastian Salichs/5342689
// Class: COP 3223, Professor Parra
// Purpose: This program prints a specific message to the
// command line.
// Input: Variables X1,X2,Y1,Y2
//
// Output: (to the command line) Various Calculations
// //********************************************************

// Header Files
#include <stdio.h>
#include <math.h>
#define PI = 3.14159;

// Prototypes
void askForUserInput();
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

// Main Function
int main (int argc, char**argv)
{

//Calling the functions

void askForUserInput();
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

return 1;
}

// This would be the functions that are called in main
void askForUserInput(double x1, double x2, double y1, double y2);
{
printf("Please enter 2 variables for point 1 (x,y): ")

scanf("%f", &x1);
scanf("%f", &x2);

printf("Please enter 2 variables for point 2 (x,y): ")

scanf("%f", &y1);
scanf("%f", &y2);

}

double calculateDistance();
{

double x1,x2,y1,y2;
askForUserInput(&x1, &x2, &y1, &y2);

double distance = sqrt ((x2-x1) * (x2-x1) + (y2-y1) * (y2-y1));

printf("Point #1 entered: x1 = %1.f; y1 = %1.f\n", x1, y1);
printf("Point #2 entered: x2 = %1.f; y2 = %1.f\n", x2, y2);
printf("The distance between the two points is: %f ", distance);

return distance;
}

double calculatePerimeter();
{
  //double calculateDistance(); or just "distance"
  askForUserInput(&x1, &x2, &y1, &y2);

  double xValues = x2+x1;
  double yValues = y2+y1;

  double perimeter = 2 * (xValues + yValues);


printf("The perimeter of the city encompassed by your request is: %d ", perimeter);


return 3.8;
}

double calculateArea();
{
  askForUserInput(&x1, &x2, &y1, &y2);


  double area = length + width;

printf("The area of the city encompassed by your request is: %d", area);


return 5;
}

double calculateWidth();
{
  askForUserInput(&x1, &x2, &y1, &y2);


printf("The width of the city encompassed by your request is: %d", width);

return 5;
}

double calculateHeight();
{
  askForUserInput(&x1, &x2, &y1, &y2);
height = 5.2

printf("The height of the city encompassed by your request is: %d", height);

return 5;
}