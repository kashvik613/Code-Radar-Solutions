#include <stdio.h>

int main() {
    int n, i, j, space;
    
    printf("Enter the number of rows (odd number): ");
    scanf("%d", &n);
    
    // Upper half of the diamond
    for(i = 1; i <= n; i += 2) {
        // Print spaces
        for(space = 0; space < (n - i) / 2; space++) {
            printf(" ");
        }
        
        // Print stars
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        
        printf("\n");
    }
    
    // Lower half of the diamond
    for(i = n - 2; i >= 1; i -= 2) {
        // Print spaces
        for(space = 0; space < (n - i) / 2; space++) {
            printf(" ");
        }
        
        // Print stars
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}