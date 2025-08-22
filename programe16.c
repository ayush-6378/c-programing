#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three values: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c) {
        printf("a is the greatest\n");
    } else if (b > a && b > c) {
        printf("b is the greatest\n");
    } else if (c > a && c > b) {
        printf("c is the greatest\n");
    } else {
        printf("There is a tie or equal values\n");
    }

    return 0;
}

