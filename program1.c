#include <stdio.h>

// Function to calculate the average marks of a subject
double calculateSubjectAverage(double assignment, double coursework, double midterm, double endTerm) {
    return (assignment + coursework + midterm + endTerm) / 4.0;
}

int main() {
    double physics[4], chemistry[4], math[4];
    double avgPhysics, avgChemistry, avgMath, overallAverage;

    // Input marks for Physics
    printf("Enter marks for Physics (Assignment, Coursework, Midterm, End-term): ");
    for (int i = 0; i < 4; i++) {
        scanf("%lf", &physics[i]);
    }

    // Input marks for Chemistry
    printf("Enter marks for Chemistry (Assignment, Coursework, Midterm, End-term): ");
    for (int i = 0; i < 4; i++) {
        scanf("%lf", &chemistry[i]);
    }

    // Input marks for Math
    printf("Enter marks for Math (Assignment, Coursework, Midterm, End-term): ");
    for (int i = 0; i < 4; i++) {
        scanf("%lf", &math[i]);
    }

    // Calculate subject averages
    avgPhysics = calculateSubjectAverage(physics[0], physics[1], physics[2], physics[3]);
    avgChemistry = calculateSubjectAverage(chemistry[0], chemistry[1], chemistry[2], chemistry[3]);
    avgMath = calculateSubjectAverage(math[0], math[1], math[2], math[3]);

    // Calculate overall average
    overallAverage = (avgPhysics + avgChemistry + avgMath) / 3.0;

    // Display results
    printf("\nAverage Marks:\n");
    printf("Physics: %.2lf\n", avgPhysics);
    printf("Chemistry: %.2lf\n", avgChemistry);
    printf("Math: %.2lf\n", avgMath);
    printf("Overall Average: %.2lf\n", overallAverage);

    return 0;
}
