#include <stdio.h>

int main(void) {
    int n;
    int a, b;
    scanf("%d %d %d", &a, &b, &n);

    a = a % b;
    for (int i = 1; i < n; i++) {
        a = (a * 10) % b;
    }

    a = (a * 10) / b;
    printf("%d\n", a);

    return 0;
}
