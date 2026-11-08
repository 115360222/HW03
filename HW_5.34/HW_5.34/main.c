#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int power(int, int);

int main()
{
    int base, exponent;

    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);

    printf("Result = %d\n", power(base, exponent));

    return 0;
}

int power(int base, int exponent)
{
    // 終止條件
    if (exponent == 1)
    {
        return base;
    }

    // 遞迴呼叫
    return base * power(base, exponent - 1);
}