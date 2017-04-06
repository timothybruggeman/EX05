// Date.cpp - date class implementation
//
#include <ctime>

#include "Date.h"

Date::Date()
{
	// Set Date to "today"
	time_t seconds = time(0); // get the time right now in seconds
	tm *ptm = localtime(&seconds);
	_year = 1900 + ptm->tm_year;
	_month = ptm->tm_mon + 1;
	_day = ptm->tm_mday;
}

Date::Date(int time_since_epoch)
{
	// Set Date to "time since epoch"
	time_t seconds = time_since_epoch;
	tm *ptm = localtime(&seconds);
	_year = 1900 + ptm->tm_year;
	_month = ptm->tm_mon + 1;
	_day = ptm->tm_mday;
}

Date::Date(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;
}

Date::Date(const Date& date)
{
	_year = date._year;
	_month = date._month;
	_day = date._day;
}

void Date::setDate(int time_since_epoch)
{
	// Set Date to "time since epoch"
	time_t seconds = time_since_epoch;
	tm *ptm = localtime(&seconds);
	_year = 1900 + ptm->tm_year;
	_month = ptm->tm_mon + 1;
	_day = ptm->tm_mday;
}

void Date::setDate(const Date& date)
{
	_year = date._year;
	_month = date._month;
	_day = date._day;
}

int Date::getYear() const
{
	return _year;
}

int Date::getMonth() const
{
	return _month;
}

int Date::getDay() const
{
	return _day;
}