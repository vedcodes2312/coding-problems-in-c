//playing with characters
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() 
{

    char ch;
    char s[50];
    char sen[100];
    //inputs
    scanf(" %c", &ch);
    scanf("%s", s);
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    //printing
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s", sen);
    
  return 0;
}  
       
