#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n)
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            printf("%c", (i ==1 || i == n || j == 1 || j == n) * '*' + (i > 1 && i < n && j > 1 && j < n) * ' ');
        }
        print("\n");
    }
    return 0;
}