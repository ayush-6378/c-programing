#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two values: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("True\n");
    } else if (a == b) {
        printf("Numbers are equal\n");
    } else {
        printf("False\n");
    }

    return 0;
}
