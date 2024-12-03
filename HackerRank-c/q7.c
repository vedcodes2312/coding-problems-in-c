//pointers in c
#include <stdio.h>
#include<stdlib.h> //for abs function
void update(int *a,int *b) 
{
    int sum,absdiff;
    sum= *a + *b;
    absdiff = abs(*a - *b); 
    *a=sum;
    *b=absdiff;//absdiff= absolute difference   
}

int main() 
{
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
