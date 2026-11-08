#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

unsigned long long int fibonacci(unsigned int);

int main()
{
    unsigned int n;

    printf("Enter n: ");
    scanf("%u", &n);

    printf("Fibonacci(%u) = %llu\n", n, fibonacci(n));

    // 找出 unsigned long long int 能儲存的最大 Fibonacci 數
    unsigned long long int a = 0;
    unsigned long long int b = 1;
    unsigned long long int next;

    unsigned int i = 2;

    while (1)
    {
        // 檢查加法是否會超出範圍
        if (b > (~0ULL) - a)
        {
            break;
        }

        next = a + b;
        a = b;
        b = next;
        i++;
    }

    printf("Largest Fibonacci index: %u\n", i - 1);
    printf("Largest Fibonacci number: %llu\n", b);

    return 0;
}

unsigned long long int fibonacci(unsigned int n)
{
    unsigned long long int a = 0;
    unsigned long long int b = 1;
    unsigned long long int next;

    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    for (unsigned int i = 2; i <= n; i++)
    {
        next = a + b;
        a = b;
        b = next;
    }

    return b;
}
