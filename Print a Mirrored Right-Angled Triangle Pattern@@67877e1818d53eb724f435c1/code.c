#include <stdio.h>

int main() {
    int i, j, n;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("%c", (j <= n - i) * ' ' + (j > n - i) * '*');
        }
        printf("\n");
    }

    return 0;
}
