//delete an element of array    
//Author:Ved Vyas     github:vedcodes2312
#include <stdio.h>
#include<stdlib.h>
int main()
 {
    system("cls");
    int n;

    // user will input the number of elements
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);

    int a[n]; // declare an array of size n

    //store elements in the array
    printf("\nEnter elements of array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }


    //array before deletion
    printf("\nArray before deletion:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d\t", a[i]);
    }

    int delete;
    printf("\nEnter the element to be deleted: ");
    scanf("%d", &delete);

    //find and delete the element
    int i;
    for (i = 0; i < n; i++) 
    {
        if (a[i] == delete) 
        {
            break; //element found, break the loop
        }
    }

    if (i == n) 
    {
        printf("\nElement not found in the array.\n");
    } else 
      {
        for (int j = i; j < n-1; j++) 
        {
            a[j] = a[j + 1]; // Shift elements left
        }
        n--; // Decrement the size of the array

        //Array after deletion
        printf("\nArray after deletion:\n");
        /* n-1 to be in the range of size  of array, if we use n  then it will be out of range 
        and may lead to runtime error in ouput */

        for (int i = 0; i < n; i++) 
        {
            printf("%d\t", a[i]);
        }
        printf("\n");
      }

    return 0;
 }
        

