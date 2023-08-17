#include <stdio.h>
#include "main.h"
/**
 * print_remaining_days - prints no of days left in a year
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		if (month == 2 && day == 29)
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 366 - day);
		}
		else if (month >= 2 && day >= 60)
		{
			day++;
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 366 - day);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 366 - day);
		}
		else
		{
			if (month == 2 && day > 28)
			{
				printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
			}
			else if (month == 2 && day == 28)
			{
				printf("Day of the year: %d\n", day);
				printf("Remaining days: %d\n", 365 - day);
			}
			else if (month >= 2 && day >= 59)
			{
				day++;
				printf("Day of the year: %d\n", day);
				printf("Remaining days: %d\n", 365 - day);
			}
			else
			{
				printf("Day of the year: %d\n", day);
				printf("Remaining days: %d\n", 365 - day);
			}
		}
	}
}
