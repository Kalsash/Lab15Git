#include "git.h"
#include <iostream>

bool IsLeapYear(int n)
{
	if (n % 4 == 0 && n % 100 != 0)
	{
		if (n % 400 == 0)
		{
			return true;
		}
		else return false;
	}
	return false;
}
int SecondsInMinute()
{
	return 60;
}

void LaterInYear(int da, int ma, int db, int mb)
{
	if (ma == mb)
	{
		if (da > db)
		{
			cout << "Первый из введенных день ближе к Новому году" << endl;
		}
		if (da < db)
		{
			cout << "Второй из введенных день ближе к Новому году" << endl;
		}
		if (da == db)
		{
			cout << "Оба дня одинаково близки к Новому году" << endl;
		}
	}
	else
	{
		if (ma > mb)
		{
			cout << "Первый из введенных день ближе к Новому году" << endl;
		}
		if (ma < mb)
		{
			cout << "Второй из введенных день ближе к Новому году" << endl;
		}
	}
	
}
int SeconsInHours(int n)
{
	return n*3600;
}

bool IsYearOfApocalypse(int n)
{ 
	return (n == 1992 || n == 2005 || n == 2011);
}

int DaysInYear(int n)
{
	if (IsLeapYear)
	{
		return 366;
	}
	else return 365;
}

int DaysInYearRange(int a, int b)
{
	int res = 0;
	for (size_t i = a; i <= b; i++)
	{
		res += DaysInYear(i);
	}
}