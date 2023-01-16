#include <stdio.h>

int main() 
{
    char s[100];
  	
    /* Read input from STDIN. Print output to STDOUT */ 
    scanf("%[^\n]%*c", &s);
    
    printf("Hello, World!\n");
    printf("%s", s);   
    return 0;
}