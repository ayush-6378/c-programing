#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two values: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("True\n");
    } else if (a<b) {
        printf("b is greater");
    }

    return 0;
}
