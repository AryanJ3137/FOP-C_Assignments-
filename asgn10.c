#include <stdio.h>
#include <math.h>
long long factorial (int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;    
}
int main () {
    int choice; 
    int x,y;
    float a,b; 

    do { 
        printf("\nCALCULATOR\n"); 
        printf("1. Addition\n");
        printf("2. Subtraction\n"); 
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power (x,y)\n");
        printf("6. Factorial\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("Result: %.2f\n", a + b);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("Result: %.2f\n", a - b);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("Result: %.2f\n", a * b);
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                if (b != 0) {
                    printf("Result: %.2f\n", a / b);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            case 5:
                printf("Enter base and exponent: ");
                scanf("%d %d", &x, &y);
                printf("Result: %.2f\n", pow(x, y));
                break;
            case 6:
                printf("Enter a number: ");
                scanf("%d", &x);
                if (x < 0) {
                    printf("Error: Factorial is not defined for negative numbers.\n");
                } else {
                    printf("Result: %lld\n", factorial(x));
                }
                break;
            case 7:
                printf("Exiting the calculator. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 7);
    return 0; 
}

