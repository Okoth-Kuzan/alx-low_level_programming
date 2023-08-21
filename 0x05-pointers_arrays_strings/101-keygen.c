#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int password[100];
    int sum = 0;

    srand(time(NULL));

    for (int i = 0; i < 100; i++)
    {
        password[i] = rand() % 78;
        sum += password[i];
        putchar(password[i] + '0');
        
        if (sum >= 2772)
        {
            int remaining_value = 2772 - (sum - password[i]);
            putchar(remaining_value + '0');
            break;
        }
    }

    return 0;
}

