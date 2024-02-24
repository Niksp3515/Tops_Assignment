#include <stdio.h>

void main() {
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum = sum +(i * i);
        printf("(%d * %d) ", i,i);
        if (i != n)
            printf("+ ");
    }

    printf("= %d\n", sum);
}
