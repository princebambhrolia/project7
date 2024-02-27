#include <stdio.h>


int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
int division(int a, int b);
int modulus(int a, int b);

int main() {
    int choice, num3, num4;
    
  
    do {
        printf("\nPress 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 to exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
       
        switch(choice) {
            case 1:
                printf("Enter the first number: ");
                scanf("%d", &num3);
                printf("Enter the second number: ");
                scanf("%d", &num4);
                printf("Addition of %d and %d is %d\n", num3, num4, addition(num3, num4));
                break;
            case 2:
                printf("Enter the first number: ");
                scanf("%d", &num3);
                printf("Enter the second number: ");
                scanf("%d", &num4);
                printf("Subtraction of %d and %d is %d\n", num3, num4, subtraction(num3, num4));
                break;
            case 3:
                printf("Enter the first number: ");
                scanf("%d", &num3);
                printf("Enter the second number: ");
                scanf("%d", &num4);
                printf("Multiplication of %d and %d is %d\n", num3, num4, multiplication(num3, num4));
                break;
            case 4:
                printf("Enter the first number: ");
                scanf("%d", &num3);
                printf("Enter the second number: ");
                scanf("%d", &num4);
                printf("Division of %d and %d is %d\n", num3, num4, division(num3, num4));
                break;
            case 5:
                printf("Enter the first number: ");
                scanf("%d", &num3);
                printf("Enter the second number: ");
                scanf("%d", &num4);
                printf("Modulus of %d and %d is %d\n", num3, num4, modulus(num3, num4));
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    } while (choice != 0);
    
    return 0;
}

// Function definitions
int addition(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    if (b != 0)
        return a / b;
    else {
        printf("Error! Division by zero.\n");
        return 0;
    }
}

int modulus(int a, int b) {
    if (b != 0)
        return a % b;
    else {
        printf("Error! Modulus by zero.\n");
        return 0;
    }
}