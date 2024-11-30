/*    calculate correlation coefficient of a data
coefficient of correlation =        n∑xy − ∑x∑y
                              ______________________________
                              
                               √[(n∑x² − (∑x)²][n∑y²− (∑y)²]

in order having readings(number of observations) more than 5 or less than 5, just change the value 
with #define preprocessor before main function(SIZE),it will impact changes in the program accordingly(line 9)
eg:   x | 1 | 5 | 9               so we have 3 readings/observations,SIZE = 3
      y | 2 | 6 | 10
      Arrays are used in the code,assume observations of x as a column/row matrix(one dimensional),same for y
Name:Ved Vyas              GITHUB:vedcodes2312               */


#include <stdio.h>
#include <math.h>
#define SIZE 5 // total readings of data = array size

int main() {
    double x[SIZE], y[SIZE];
    double sum_x = 0, sum_y = 0, sum_x2 = 0, sum_y2 = 0, sum_xy = 0;

    // Input data from the user
    printf("Enter %d values for x:\n", SIZE);  //in form of array
    for (int i = 0; i < SIZE; i++) 
    {
        printf("x[%d]: ", i);
        scanf("%lf", &x[i]);
    }

    printf("\nEnter %d values for y:\n", SIZE); //in form of array
    for (int i = 0; i < SIZE; i++) 
    {
        printf("y[%d]: ", i);
        scanf("%lf", &y[i]);
    }

    // Print the arrays
    printf("\n x: ");
    for (int i = 0; i < SIZE; i++) 
    {
        printf("%.2f, ", x[i]);
    }

    printf("\n y: ");
    for (int i = 0; i < SIZE; i++) 
    {
        printf("%.2f, ", y[i]);
    }
    printf("\n");

    // Calculate the sums
    for (int i = 0; i < SIZE; i++) 
    {
        sum_x += x[i];
        sum_y += y[i];
        sum_x2 += pow(x[i], 2);
        sum_y2 += pow(y[i], 2);
        sum_xy += x[i] * y[i];
    }

    // Numerator and denominator according to the formula
    double numerator = SIZE * sum_xy - sum_x * sum_y;
    double denominator = sqrt((SIZE * sum_x2 - pow(sum_x, 2)) * (SIZE * sum_y2 - pow(sum_y, 2)));

    // Calculate the correlation coefficient
    double correlation_coefficient = numerator / denominator;

    printf("Correlation Coefficient = %.3f\n", correlation_coefficient);

    return 0; // End of program
}
