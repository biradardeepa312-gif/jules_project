#include <stdio.h>

int main(void) {
    float marks[5];
    float total = 0.0f;
    float average;

    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        if (scanf("%f", &marks[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
        total += marks[i];
    }

    average = total / 5.0f;

    printf("\n--- Result ---\n");
    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);

    return 0;
}
