//write a program to create quiz application.
#include <stdio.h>

int main() {
    int answer;
    int score = 0;

    printf("--- Welcome to the Ultimate C Quiz! ---\n\n");

    // Question 1
    printf("Question 1: Who is credited with creating the C programming language?\n");
    printf("1) Bjarne Stroustrup\n");
    printf("2) Dennis Ritchie\n");
    printf("3) James Gosling\n");
    printf("4) Linus Torvalds\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &answer);

    if (answer == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong answer. The correct choice was 2) Dennis Ritchie.\n\n");
    }

    // Question 2
    printf("Question 2: Which keyword is used to prevent any changes to a variable in C?\n");
    printf("1) static\n");
    printf("2) volatile\n");
    printf("3) const\n");
    printf("4) immutable\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &answer);

    if (answer == 3) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong answer. The correct choice was 3) const.\n\n");
    }

    // Question 3
    printf("Question 3: What is the correct format specifier for printing a double value?\n");
    printf("1) %%d\n");
    printf("2) %%f\n");
    printf("3) %%lf\n");
    printf("4) %%s\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &answer);

    if (answer == 3) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong answer. The correct choice was 3) %%lf.\n\n");
    }

    // Final Results
    printf("--- Quiz Completed! ---\n");
    printf("Your final score is: %d out of 3\n", score);

    if (score == 3) {
        printf("Excellent job! Perfect score.\n");
    } else if (score >= 1) {
        printf("Good effort!\n");
    } else {
        printf("Better luck next time!\n");
    }

    return 0;
}
