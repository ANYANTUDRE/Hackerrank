// 
#include <stdio.h>

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.

    for (int i = a; i< b; i++){
        if ((i>= 1) && (i<=9)){
            switch (i) {
                case 1: printf("one\n");
                case 2: printf("two\n");
                case 3: printf("three\n");
                case 4: printf("four\n");
                case 5: printf("five\n");
                case 6: printf("six\n");
                case 7: printf("seven\n");
                case 8: printf("eight\n");
                case 9: printf("nine\n");
                
            }
        }
        else if ((i>9) && (i%2 == 0)) {
        printf("even\n");
        }
        else if ((i>9) && (i%2 != 0)){
        printf("odd\n");
        }
    }
    return 0;
}

