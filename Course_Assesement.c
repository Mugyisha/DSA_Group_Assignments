#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

// Function prototypes
float physics();
float chemistry();
float maths();
int getValidScore(const char* prompt);

int main()
{
    printf("WELCOME TO CYBERGEEKS STUDENTS ASSESSMENT MANAGEMENT SYSTEM:\n\n");

    float p = physics();
    float c = chemistry();
    float m = maths();

    float total = (p + c + m);
    float avg = total / 3.0;  // Ensure floating-point division

    printf("Your final score for combination PCM is: %.2f\n", avg);

    return 0;
}

// Function to get a valid score between 0 and 100
int getValidScore(const char* prompt) {
    int score;
    do {
        printf("%s", prompt);
        scanf("%d", &score);
        if (score < 0 || score > 100) {
            printf("Invalid score! Please enter a value between 0 and 100.\n");
        }
    } while (score < 0 || score > 100);
    return score;
}

// Physics function
float physics() {
    int asgnmt, coursework, mid_term, final_exams, total;
    float average;

    asgnmt = getValidScore("Enter your Physics assignments score:\n");
    coursework = getValidScore("Enter your Physics coursework score:\n");
    mid_term = getValidScore("Enter your Physics mid-term score:\n");
    final_exams = getValidScore("Enter your Physics final exams score:\n");

    total = asgnmt + coursework + mid_term + final_exams;
    average = (float)total / 4;  // Ensure correct division

    printf("You scored %.2f in Physics.\n", average);
    return average;
}

// Chemistry function
float chemistry() {
    int asgnmt, coursework, mid_term, final_exams, total;
    float average;

    asgnmt = getValidScore("Enter your Chemistry assignments score:\n");
    coursework = getValidScore("Enter your Chemistry coursework score:\n");
    mid_term = getValidScore("Enter your Chemistry mid-term score:\n");
    final_exams = getValidScore("Enter your Chemistry final exams score:\n");

    total = asgnmt + coursework + mid_term + final_exams;
    average = (float)total / 4;

    printf("You scored %.2f in Chemistry.\n", average);
    return average;
}

// Maths function
float maths() {
    int asgnmt, coursework, mid_term, final_exams, total;
    float average;

    asgnmt = getValidScore("Enter your Maths assignments score:\n");
    coursework = getValidScore("Enter your Maths coursework score:\n");
    mid_term = getValidScore("Enter your Maths mid-term score:\n");
    final_exams = getValidScore("Enter your Maths final exams score:\n");

    total = asgnmt + coursework + mid_term + final_exams;
    average = (float)total / 4;

    printf("You scored %.2f in Maths.\n", average);
    return average;
}
