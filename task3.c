#include <stdio.h>

//Function definitions
float adder (float a, float b);
float subtracter (float a, float b);
float multiplier (float a, float b);
float divider (float a, float b);

int main() {
    float a;
    float b;
    int option;
    //Scanning options and operation
    printf("Enter 1st #: ");
    scanf("%f", &a);
    printf("Enter 2nd #: ");
    scanf("%f", &b);
    printf("Enter the operation: \n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    scanf("%d", &option);

    //Loop that runs all operations
    if (option == 1) {
        float add = adder(a,b);
        printf("Adding them yields %.2f", add);
    } else if (option == 2) {
        float subtract = subtracter(a,b);
        printf("Subtracting them yields %.2f", subtract);
    } else if (option == 3) {
        float multiply = multiplier(a,b);
        printf("Multiplying them yields %.2f", multiply);
    } else {
        float divide = divider(a,b);
        printf("Dividing them yields %.2f", divide);
    }
    return 0;
}

float adder (float a, float b) { //Adding Operation
    float c = a + b;
    return c;
}

float subtracter (float a, float b) {//Subtraction Operation
    int movement;
    printf("Which way do you want it? a-b (1) or b-a (2)\n");
    scanf("%d", &movement);
    //Asks for order of operation
    if (movement==1) {
        float c = a-b;
        return c;
    } else {
        float c = b-a;
        return c;
    }
}

float multiplier (float a, float b) {//Multiplication Operation
    float c = a * b;
    return c;
}

float divider (float a, float b) {//Division Operation
    int movement;
    printf("Which way do you want it? a/b (1) or b/a (2)\n");
    scanf("%d", &movement);
    //Asks for order of operation
    if (movement==1) {
        float c = a/b;
        return c;
    } else {
        float c = b/a;
        return c;
    }
}