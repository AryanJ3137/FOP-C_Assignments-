#include  <stdio.h>
int main() {
    int choice;
    int a,b;

    printf("menu:\n");
    printf("1. Addition\n"); 
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");  
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch (choice) {
        case 1:
            printf("Result: %d\n", a + b);
            break;
        case 2:
            printf("Result: %d\n", a - b);
            break;
        case 3:
            printf("Result: %d\n", a * b);
            break;
        case 4:
            if (b != 0) {
                printf("Result: %.2f\n", (float)a / b);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
    }
    return 0;
}