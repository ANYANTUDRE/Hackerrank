//Given a five digit integer, print the sum of its digits.
#include <stdio.h>

int main() {
	
    int n, r, sum=0;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    do {
    r = n%10;
    n= n/10;
    sum += r;
    }while (n>0);
    
    printf("%d", sum);
    return 0;
}