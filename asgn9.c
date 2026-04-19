#include <stdio.h>
int main() {
    int num, digit, temp;
    int sum = 0;  /* initialize before use */

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        digit = temp % 10;
        sum = sum + (digit*digit*digit);
        temp = temp/10;
    }
    if (sum == num)
    {
        printf("%d is an armstrong number.\n", num);
    }
    else
    {
        printf("%d is not an armstrong number.\n", num);
    }
    return 0;
}