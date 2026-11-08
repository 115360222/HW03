#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int, int);
int lcm(int, int);
int main()
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("LCM = %d\n", lcm(a, b));

    return 0;
}
int gcd(int a, int b) // Function to calculate GCD using the Euclidean algorithm
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int lcm(int a, int b)
{
    if (a == 0 || b == 0)
    {
        return 0;
    }

	return (a * b) / gcd(a, b);// Calculate LCM using the formula: a * b = LCM(a, b) / GCD(a, b) 
}
