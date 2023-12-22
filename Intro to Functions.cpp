#include <stdio.h>

// Function to add two integers
int add_int(int a, int b) {
    return a + b;
}

// Function to add two floating-point numbers
float add_float(float a, float b) {
    return a + b;
}

// Function to calculate the area of a circle given its radius
float A_circle(float r) {
    return (22.0 / 7) * r * r;  // Ensure the division results in a floating-point number
}

// Function to calculate the area of a rectangle given its sides
float A_rect(float a, float b) {
    return a * b;
}

int main() {
    // Declare variables
    int num1, num2, sum_Int;
    float float1, float2, r, circle, sum_float;

    // Input two integers and calculate their sum
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    sum_Int = add_int(num1, num2);
    printf("Sum of two integers is: %d\n", sum_Int);

    // Input two floating-point numbers and calculate their sum
    printf("Enter two floating-point numbers: ");
    scanf("%f %f", &float1, &float2);
    sum_float = add_float(float1, float2);
    printf("Sum of two floating-point numbers is: %f\n", sum_float);

    // Input the radius of a circle and calculate its area
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    circle = A_circle(r);
    printf("Area of the circle is: %f\n", circle);

    // Calculate the area of a rectangle using the floating-point numbers
    float rectangle = A_rect(float1, float2);
    printf("Area of the rectangle is: %f\n", rectangle);

    return 0;
}

