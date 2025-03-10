#include <stdio.h>


double calculate_average(double assignment, double coursework, double mid_term, double end_term) {
    return (assignment + coursework + mid_term + end_term) / 4.0;
}

int main() {
    double physics[4], chemistry[4], math[4];

    printf("Enter marks for Physics (Assignment, Coursework, Mid-term, End-term): ");
    for (int i = 0; i < 4; i++) {
        scanf("%lf", &physics[i]);
    }

    printf("Enter marks for Chemistry (Assignment, Coursework, Mid-term, End-term): ");
    for (int i = 0; i < 4; i++) {
        scanf("%lf", &chemistry[i]);
    }

    printf("Enter marks for Math (Assignment, Coursework, Mid-term, End-term): ");
    for (int i = 0; i < 4; i++) {
        scanf("%lf", &math[i]);
    }

    double avg_physics = calculate_average(physics[0], physics[1], physics[2], physics[3]);
    double avg_chemistry = calculate_average(chemistry[0], chemistry[1], chemistry[2], chemistry[3]);
    double avg_math = calculate_average(math[0], math[1], math[2], math[3]);

    double overall_avg = (avg_physics + avg_chemistry + avg_math) / 3.0;

    printf("\nAverage Marks:\n");
    printf("Physics: %.2lf\n", avg_physics);
    printf("Chemistry: %.2lf\n", avg_chemistry);
    printf("Math: %.2lf\n", avg_math);
    printf("Overall Average: %.2lf\n", overall_avg);

    return 0;
}

