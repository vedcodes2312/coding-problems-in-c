/* Swapping of two arrays  using third array 
Author:Ved Vyas    Github: vedcodes2312   */

#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int a[4],b[4],c[4],i;
    printf("\n enter first array");
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n enter second array");
    for(i=0;i<4;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("\n arrays before swapping");
    printf("\n first array\t");
    for(i=0;i<4;i++)
    {
      printf("%d\t",a[i]);
    }
    printf("\n second array\t");
    for(i=0;i<4;i++)
    {
        printf("%d\t",b[i]);
    }
//swapping of arrays
for(i=0;i<4;i++)
{
    c[i]=a[i];
    a[i]=b[i];
    b[i]=c[i];
}
printf("\n arrays after swapping");
    printf("\n first array\t");
    for(i=0;i<4;i++)
    {
      printf("%d\t",a[i]);
    }
    printf("\n second array\t");
    for(i=0;i<4;i++)
    {
        printf("%d\t",b[i]);
    }
    return 0;
}