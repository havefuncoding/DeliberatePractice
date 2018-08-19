// C Programming Complete Beginner's Guide
// By Greg Perry and Dean Miller
// Ch.32 Returning Data From Your Functions
// This program returns the average of 3 grades received

#include <stdio.h>

float gradeAvg(float test1, float test2, float test3);

int main(void)
{
    float grade1, grade2, grade3;
    float average;

    // 1. Ask user for the 3 test grades
    printf("What was the grade on the first test? ");
    scanf(" %f", &grade1);
    printf("What was the grade on the second test? ");
    scanf(" %f", &grade2);
    printf("What was the grade on the third test? ");
    scanf(" %f", &grade3);

    // 2. Pass the grades to the function and return the average
    average = gradeAvg(grade1, grade2, grade3);
    printf("With those three test scores, the average is %.2f\n",
            average);

    return (0);
}

/**********************************************************************/

float gradeAvg(float test1, float test2, float test3)
{
    float localAverage;
    localAverage = (test1+test2+test3)/3;
    
    return (localAverage); // Returns the average to main()
}
