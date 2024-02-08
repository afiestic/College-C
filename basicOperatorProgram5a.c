#include <stdio.h>

int main()
{
    // Variables for geometric objects
    float length, width, radius, height;
    float areaRectangle, perimeterRectangle, areaCircle, circumferenceCircle, volumeCube;

    // Prompt the user to enter dimensions
    printf("Enter length and width for rectangle: ");
    scanf("%f %f", &length, &width);

    // Calculate area and perimeter of rectangle
    areaRectangle = length * width;
    perimeterRectangle = 2 * (length + width);

    // Prompt the user to enter radius for a circle
    printf("Enter radius for circle: ");
    scanf("%f", &radius);

    // Calculate area and circumference of circle
    areaCircle = 3.14 * radius * radius;
    circumferenceCircle = 2 * 3.14 * radius;

    // Prompt the user to enter height for a cube
    printf("Enter height for cube: ");
    scanf("%f", &height);

    // Calculate volume of cube
    volumeCube = length * width * height;

    // Display results
    printf("\nRectangle:\nArea: %.2f\nPerimeter: %.2f\n", areaRectangle, perimeterRectangle);
    printf("\nCircle:\nArea: %.2f\nCircumference: %.2f\n", areaCircle, circumferenceCircle);
    printf("\nCube:\nVolume: %.2f\n", volumeCube);

    //
