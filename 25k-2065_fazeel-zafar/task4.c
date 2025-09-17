#include <stdio.h>

int main() {
    float s1, s2, s3, s4, s5;
    float total, percentage, cgpa;

    // Input marks
    printf("Enter marks of 5 subjects: ");
    scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);

    total = s1 + s2 + s3 + s4 + s5;
    percentage = (total / 500) * 100;        
    cgpa = (percentage / 100) * 4;           

    // Display result
    printf("\n-------------------------------\n");
    printf("       STUDENT RESULT          \n");
    printf("-------------------------------\n");
    printf("Marks: %.1f, %.1f, %.1f, %.1f, %.1f\n", s1, s2, s3, s4, s5);
    printf("Total: %.1f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("CGPA: %.2f / 4.00\n", cgpa);

    return 0;
}
