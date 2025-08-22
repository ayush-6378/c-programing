#include <stdio.h>

int main() {
    int a, b, temp;


    printf("Enter two values: ");
    scanf("%d %d", &a, &b);


    temp = a;
    a = b;
    b = temp;

    printf("After swapping:\n");
    printf("Value of a = %d\n", a);
    printf("Value of b = %d\n", b);

    return 0;
}
