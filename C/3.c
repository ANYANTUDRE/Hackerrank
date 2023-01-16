#include <stdio.h>
/* Add `int max_of_four(int a, int b, int c, int d)` here. */

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max(int x, int y){
    int max;
    if (x<y)
        max = y;
    else 
        max = x;
    return max;
}

int max_of_four(int a, int b, int c, int d){
    int maximum;
    if (max(a, b) > max(c, d))
        maximum = max(a, b);
    else 
        maximum = max(c, d);
    return maximum;
}