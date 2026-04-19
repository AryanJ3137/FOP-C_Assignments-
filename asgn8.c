#include <stdio.h>
int main() {
    int m1, m2, m3, m4, m5;
    int total_marks;

    printf("Enter the marks (five integers):\n");
    if (scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5) != 5) {
        fprintf(stderr, "Input error\n");
        return 1;
    }

    /* require at least 40 in each subject to pass */
    if (m1 >= 40 && m2 >= 40 && m3 >= 40 && m4 >= 40 && m5 >= 40) {
        total_marks = m1 + m2 + m3 + m4 + m5;
        /* compute percentage using float to avoid integer truncation */
        float percentage = ((float)total_marks / 500.0f) * 100.0f;

        if (percentage >= 75.0f) {
            printf("Grade: Distinction\n");
        } else if (percentage >= 60.0f) {
            printf("Grade: First Division\n");
        } else if (percentage >= 50.0f) {
            printf("Grade: Second Division\n");
        } else {
            printf("Result: Fail\n");
        }
        return 0;
    } else {
        printf("Result: Fail (one or more subjects below passing).\n");
        return 0;
    }
}
