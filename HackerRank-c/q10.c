//calculate the nth term
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) 
{
  int term, x1 = a, x2=b,x3=c;
  if(n==1) {
        term=x1;
  }
  else if(n==2)   {
        term=x2;
  }
  else if(n==3) {
        term = x3;
  }
  else {
  for(int i=4; i<=n;i++)
  {
        term = x1+x2+x3;
        x1=x2;
        x2=x3;
        x3=term;
  }
  }
  return term;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
