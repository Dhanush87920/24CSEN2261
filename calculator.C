#chatgptai
#include <stdio.h>

// Function to add two numbers
float add(float num1, float num2) {
    return num1 + num2;
}

// Function to subtract two numbers
float subtract(float num1, float num2) {
    return num1 - num2;
}

// Function to multiply two numbers
float multiply(float num1, float num2) {
    return num1 * num2;
}

// Function to divide two numbers
float divide(float num1, float num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Error! Division by zero.\n");
        return 0;
    }
}

int main() {
    float num1, num2, result;
    int choice;

    // Displaying the menu
    printf("Simple Calculator\n");
    printf("Select an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    // Taking user input for operation
    printf("Enter choice (1/2/3/4): ");
    scanf("%d", &choice);

    // Taking user input for the two numbers
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Performing the chosen operation
    switch(choice) {
        case 1:
            result = add(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 2:
            result = subtract(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 3:
            result = multiply(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 4:
            result = divide(num1, num2);
            if (num2 != 0) {
                printf("Result: %.2f\n", result);
            }
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}
