
#include <stdio.h>

int main() {
    int n, num = 1;

    printf("Enter the number of rows for Floyd's triangle: ");
    scanf("%d", &n);

    printf("Floyd's triangle:\n");

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
