#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char changeCase(char);

int main()
{
    char ch;

    printf("Enter an alphabet: ");
    scanf(" %c", &ch);

    printf("Result: %c\n", changeCase(ch));

    return 0;
}

char changeCase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch + 32;  // 大寫轉小寫(ASCII)
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        return ch - 32;  // 小寫轉大寫(ASCII)
    }

    return ch;
}