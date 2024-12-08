//LET US C BY YASHAWANT KANETKAR SIR    CHAPTER13 ARRAYS   EXERCISES B(f)
//Author : Ved Vyas   GITHUB:vedcodes2312

#include<stdio.h>
#include<math.h>
int main()
{
    int data[]={-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2};
    int n = sizeof(data)/sizeof(data[0]);
    double mean=0, sum=0, variance=0, standard_deviation=0;
    for(int i=0; i<n; i++)     //calculate the mean
    {
        sum = sum + data[i];
    }
    mean = sum / n;

     //for variance
     sum=0;  //reset the value of sum to 0
     for(int i=0; i<n; i++)     //calculate the variance
     {
        sum = sum + pow(data[i] - mean, 2);    //a+=b means a=a+b
     }
     variance = sum/n;

     //calculate the standard deviation
     standard_deviation = sqrt(variance);
     printf("Mean = %lf\n", mean);
     printf("Variance = %lf\n", variance);
     printf("Standard Deviation = %lf\n", standard_deviation);
     return 0;
    
}  

