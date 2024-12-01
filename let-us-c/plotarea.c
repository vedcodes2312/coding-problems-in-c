//LET US C BY YASHAWANT KANETKAR SIR    CHAPTER13 ARRAYS   EXERCISES B(g)
//Author:Ved Vyas      github:vedcodes2312

//pre processors
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define SIZE 6
int main()   //body of the code
{
    system("cls");
    //given data according to question
 double a[SIZE]={137.4, 155.2, 149.3, 160.0, 155.6, 149.7};
 double b[SIZE]={80.9, 92.62, 97.93, 100.25, 68.95, 120.0};
 double angle[SIZE]= {0.78, 0.89, 1.35, 9.00, 1.25, 1.75};
 double area[SIZE];
 int largestarea=0;
 //calculate area of every plot
 for(int i=0; i<SIZE; i++)
 {
    area[i]=0.5*a[i]*b[i]*sin(angle[i]);
    if(area[i]>area[largestarea])
    {
        largestarea=i;
    }
 }
 //printing all areas
 for(int i=0; i<SIZE; i++)
 {
    printf("Area of plot %d is %.2f\n",i+1,area[i]);
 }
 //printing largest area
 printf("Largest area is %.2f of plot %d\n",area[largestarea],largestarea+1);

return 0;

}       //end of code

