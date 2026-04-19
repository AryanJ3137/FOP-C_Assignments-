#include <stdio.h>

int main() {
    int a, b, i, gcd, smallest_divisor = 0;

    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    for(i = 1; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    for(i = 2; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0) {
            smallest_divisor = i;
            break;
        }
    }

    printf("GCD of %d and %d is: %d\n", a, b, gcd);

    if(smallest_divisor != 0)
        printf("Smallest common divisor (other than 1): %d\n", smallest_divisor);
    else
        printf("No common divisor other than 1\n");

    return 0;
}