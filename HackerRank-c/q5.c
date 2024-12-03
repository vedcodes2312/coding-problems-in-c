//array reversal
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n, *a, i;
    scanf("%d", &n); // size of array
    a = (int*)malloc(n * sizeof(int));

    for (i = 0; i < n; i++) 
    {
        scanf("%d", a + i);    
    }

    printf("\n");

    int temp; // temporary third variable
    for (i = 0; i < n / 2; i++)
      {  // to reverse the array
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;  
    }

    for (i = 0; i < n; i++)
      {
        printf("%d ", *(a + i));
    }

    free(a); // free allocated memory
    return 0;
}
