#include <iostream>
#include <date.h>

Date::Date()
{
	this->day = 0;
	this->month = 0;
	this->year = 0;
}
void Date::set_day(int day)
{
	this->day = day;
}

void Date::set_month(int month)
{
	this->month = month;
}

void Date::set_year(int year)
{
	this->year = year;
}


int Date::get_day(void)
{
	return (this->day);
}


int Date::get_month(void)
{
	return (this->month);
}


int Date::get_year(void)
{
	return (this->year);
}
