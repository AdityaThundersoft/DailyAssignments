#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Reversed array:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }

    return 0;
}
// Enter n: 5
// Enter 5 integers: 1 2 3 4 5
// Reversed array:
// 5 4 3 2 1