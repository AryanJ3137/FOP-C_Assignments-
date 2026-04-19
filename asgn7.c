#include <stdio.h>

struct student {
    int roll;
    char name[50];
    float m1, m2, m3;
    float total, avg;
};

int main() {
    struct student s[50];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks in 3 subjects: ");
        scanf("%f %f %f", &s[i].m1, &s[i].m2, &s[i].m3);

        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
        s[i].avg = s[i].total / 3;
    }

    printf("\n--- Student Results ---\n");

    for(i = 0; i < n; i++) {
        printf("\nRoll No: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Total: %.2f\n", s[i].total);
        printf("Average: %.2f\n", s[i].avg);

        if(s[i].avg >= 40)
            printf("Result: PASS\n");
        else
            printf("Result: FAIL\n");
    }

    return 0;
}