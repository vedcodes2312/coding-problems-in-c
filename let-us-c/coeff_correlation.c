//LET US C BY YASHAWANT KANETKAR SIR    CHAPTER13 ARRAYS   EXERCISES B(h)
//Calculate the correlation coefficient
//Author : Ved Vyas   GITHUB:vedcodes2312

//pre processors
#include<stdio.h>
#include<math.h>
#define SIZE 11    //total readings of data = array size
int main()
{
    //given data
    double x[SIZE] = {34.22, 39.87, 41.85, 43.23, 40.06, 53.29, 53.29, 54.14, 49.12, 40.71, 55.15};
    double y[SIZE] = {102.43, 100.03, 97.43, 97.81,  98.32, 98.32, 100.07, 97.08, 91.59, 94.85, 94.65};
    double sum_x=0,sum_y=0,sum_x2=0,sum_y2=0,sum_xy=0;
    for(int i=0; i<SIZE; i++)
    {
        //calculate the sums
        sum_x += x[i];
        sum_y += y[i];
        sum_x2 += pow(x[i],2);
        sum_y2 += pow(y[i],2);
        sum_xy += x[i]*y[i];
    }
  //numerator and denominator according to the formula
  double numerator = SIZE*sum_xy - sum_x*sum_y;
  double denominator;
  denominator = sqrt((SIZE * sum_x2 - pow(sum_x,2)) * (SIZE * sum_y2 - pow(sum_y,2)));
  //calculate the correlation coeffcient
  double correlation_coefficient = numerator/denominator;
  printf("Correlation Coefficient = %.3f\n",correlation_coefficient);

return 0; //end of program

}
