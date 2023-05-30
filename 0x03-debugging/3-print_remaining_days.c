#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	int total_days, remaining_days;

	if (month > 2 && (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)))
	{
		day++;
	}

	total_days = ((year % 4 == 0) && (year % 100 != 0)) ? 366 : 365;
	remaining_days = total_days - day;

	if (month == 2 && day > 29)
		printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);

	else
	{
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", remaining_days);
	}
}
