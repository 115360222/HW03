
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void hanoi(int, char, char, char);

int main()
{
    int n;

    printf("Enter number of disks: ");
    scanf("%d", &n); 

    if (n < 1)
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    hanoi(n, 'A', 'B', 'C');

    return 0;
}

void hanoi(int n, char from, char auxiliary, char to)
{
    // 終止條件：只剩一個圓盤
    if (n == 1)
    {
        printf("Move disk 1 from %c to %c\n", from, to);
        return;
    }

    // 將 n-1 個圓盤移到輔助柱
    hanoi(n - 1, from, to, auxiliary);

    // 將最大的圓盤移到目標柱
    printf("Move disk %d from %c to %c\n", n, from, to);

    // 將 n-1 個圓盤移到目標柱
    hanoi(n - 1, auxiliary, from, to);
}