//sum and difference of two numbers
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
   int a,b;
   float x,y;
   scanf("%d %d %f %f",&a,&b,&x,&y);
   int isum = a + b;
   int idiff = a - b;
   float fsum = x + y;
   float fdiff = x - y;
   
   printf("%d %d\n",isum,idiff);
   printf("%.1f %.1f",fsum,fdiff); 	
    
    return 0;
}
