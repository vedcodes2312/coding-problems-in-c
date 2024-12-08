//LET US C BY YASHAWANT KANETKAR SIR    CHAPTER13 ARRAYS   EXERCISES B(i)
//Author : Ved Vyas   GITHUB:vedcodes2312

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define SIZE 10
int main()
{
    system("cls");
    int x[SIZE],y[SIZE];     //coordinate (x,y)
   double tot_dist = 0;      //varible for total distance

    //input from user
    printf("Enter the values of 10 coordinates (x,y): \n");
    for(int i=0; i<SIZE; i++)
    {
        printf("Enter x[%d] and y[%d]: point %d(x,y) ",i+1,i+1,i+1);
        scanf("%d %d",&x[i],&y[i]);
    }

    //calculate the distance between consecutive points
    for(int i=0; i<SIZE-1; i++)  //important logic of size-1
    {
        double dist = sqrt( pow(x[i+1] - x[i], 2) + pow(y[i+1] - y[i], 2) );
        tot_dist = tot_dist + dist;    //tot_dist += dist   , a+=b imples a=a+b
    }
    printf("The total distance from the first point to the last point is: %lf\n", tot_dist);
    return 0;  //end of code
}

/*The X and Y coordinates of 10 different points are entered through the keyboard. 
Write a program to find the distance of last point from the first point 
(sum of distances between consecutive points).       */
