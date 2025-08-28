//Grading of students
#include <stdio.h>

// Function to calculate average
float calculateAverage(int marks[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += marks[i];
    }
    return (float)sum / size;
}

// Function to find highest mark
int findHighestmark(int marks[], int size) {
    int highest = marks[0];
    for (int i = 1; i < size; i++) {
        if (marks[i] > highest) {
            highest = marks[i];
        }
    }
    return highest;
}

// Function to determine letter mark
char determineLettermark(int mark) {
    if (mark >= 90) return 'A';
    else if (mark >= 80) return 'B';
    else if (mark >= 70) return 'C';
    else if (mark >= 60) return 'D';
    else return 'F';
}

int main() {
    int size;
    printf("Total no. of students: ");
    scanf("%d", &size);  // Read number of students

    int marks[size];

    // Read marks
    printf("Enter marks:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &marks[i]);
    }

    // Calculate and display the average mark
    float average = calculateAverage(marks, size);
    printf("Average mark: %.2f\n", average);

    // Find and display the highest mark
    int highest = findHighestmark(marks, size);
    printf("Highest mark: %d\n", highest);

    // Display letter mark for each student
    printf("Student Grades:\n");
    for (int i = 0; i < size; i++) {
        printf("Student no.%d: %d - %c\n", i + 1, marks[i], determineLettermark(marks[i]));
    }

    return 0;
}