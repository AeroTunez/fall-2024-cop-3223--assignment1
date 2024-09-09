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

#define PI = 3.14159 //Preproccessor directive for PI.

// Prototypes for the functions
void askForUserInput(double* x1, double* x2, double* y1, double* y2);
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

// Main Function
int main(int argc, char** argv)
{
	//Calling the functions

	double calculateDistance();
	double calculatePerimeter();
	double calculateArea();
	double calculateWidth();
	double calculateHeight();

	return 1;
}

// Functions
void askForUserInput(double* x1, double* x2, double* y1, double* y2) // To distinguish functions, and to pass them to the rest of the functions
{
	//Asks user for the variables for X & Y and scans them for the rest of the functions to reference to.

	printf("Please enter 2 variables for point 1 (x,y): ");

	scanf("%lf", x1);
	scanf("%lf", x2);

	printf("Please enter 2 variables for point 2 (x,y): ");

	scanf("%lf", y1);
	scanf("%lf", y2);

}

double calculateDistance()
{

	double x1, x2, y1, y2;
	askForUserInput(&x1, &x2, &y1, &y2);

	double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); // Distance formula with user's input.

	printf("Point #1 entered: x1 = %1.lf; y1 = %1.lf\n", x1, y1);
	printf("Point #2 entered: x2 = %1.lf; y2 = %1.lf\n", x2, y2);
	printf("The distance between the two points is: %.2lf", distance); // Mentions the points entered and the distance between both points.

	return distance;
}

double calculatePerimeter()
{
	double x1, x2, y1, y2;
	askForUserInput(&x1, &x2, &y1, &y2);

	double perimeter = 2 * (fabs(x1 - x2) + fabs(y1 - y2)); // Perimeter formula with user's input. Using Fabs to format user's input to absolute value.

	printf("Point #1 entered: x1 = %1.lf; y1 = %1.lf\n", x1, y1);
	printf("Point #2 entered: x2 = %1.lf; y2 = %1.lf\n", x2, y2);
	printf("The perimeter of the city encompassed by your request is: %.2lf", perimeter); // Mentions the points entered and the perimeter between both points.

	return 4;
}

double calculateArea()
{
	double x1, x2, y1, y2;
	askForUserInput(&x1, &x2, &y1, &y2);

	double area = 2 * (fabs(x1 - x2) + fabs(y1 - y2)); // Perimeter formula with user's input. Using Fabs to format user's input to absolute value.


	printf("Point #1 entered: x1 = %1.lf; y1 = %1.lf\n", x1, y1);
	printf("Point #2 entered: x2 = %1.lf; y2 = %1.lf\n", x2, y2);
	printf("The area of the city encompassed by your request is: %.2lf", area); // Mentions the points entered and the area of the city.

	return 5;
}

double calculateWidth()
{
	double x1, x2, y1, y2;
	askForUserInput(&x1, &x2, &y1, &y2);

	double width = x2 - x1; // Width formula with user's input.

	printf("Point #1 entered: x1 = %1.lf; y1 = %1.lf\n", x1, y1);
	printf("Point #2 entered: x2 = %1.lf; y2 = %1.lf\n", x2, y2);
	printf("The width of the city encompassed by your request is: %.2lf", width); // Mentions the points entered and the width of the city.

	return 3;
}

double calculateHeight()
{
	double x1, x2, y1, y2;
	askForUserInput(&x1, &x2, &y1, &y2);

	double height = y2 - y1; // Height formula with user's input.

	printf("Point #1 entered: x1 = %1.lf; y1 = %1.lf\n", x1, y1);
	printf("Point #2 entered: x2 = %1.lf; y2 = %1.lf\n", x2, y2);
	printf("The height of the city encompassed by your request is: %2.lf", height); // Mentions the points entered and the height of the city.

	return 3;
}