#include<stdio.h>

void main()
{
    int n, i, sum = 0, even = 2;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
{
        sum += even;
        even += 2;
}

    printf("Sum of first %d even numbers = %d\n", n, sum);
}

