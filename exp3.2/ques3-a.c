//3.	WAP to generate the following set of output.
//a.	
//  1
// 2 3
//4 5 6

#include <stdio.h>

int main() {
    int num = 1;

    for (int i = 1; i <= 3; i++) { 
        
        for (int k = 3; k > i; k--) {
            printf("  ");
        }
      
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}

