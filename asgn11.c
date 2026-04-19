#include <stdio.h>
#include <math.h>

int isprime(int n) {
    if (n <= 1)
        return 0;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main(void) {
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }

    if (n >= 0) {
        printf("Square root: %.2f\n", sqrt((double)n));
    } else {
        printf("Error: Cannot compute square root of negative number.\n");
    }

    printf("Square: %d\n", n * n);
    printf("Cube: %d\n", n * n * n);

    if (isprime(n)) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    if (n >= 0) {
        printf("Factorial: %lld\n", factorial(n));
    } else {
        printf("Error: Cannot compute factorial of negative number.\n");
    }

    if (n > 1) {
        printf("Prime factors: ");
        int temp = n;
        for (int i = 2; i <= temp; i++) {
            while (temp % i == 0) {
                printf("%d ", i);
                temp /= i;
            }
        }
        printf("\n");
    } else {
        printf("Prime factors: none\n");
    }

    return 0;
}
