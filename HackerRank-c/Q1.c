//1D ARRAYS IN C

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;  //size
    scanf("%d",&n);
    int *a; //dynamic memory allocation for array
    a = (int*)malloc(n*sizeof(int));
    if(a == NULL)
    {
        printf("memory allocation has failed\n");
        return 1;
    }
   //enetering array elements
   for(int i=0; i < n; i++) 
   {
        scanf("%d", &a[i]);
   }  
   int sum=0;
    for(int i=0; i < n; i++)
    {
      sum = sum + a[i];//sum+=a[i]  
    }
    printf( "%d",sum);
    free(a); //free the allocated space
    return 0;
    
}
