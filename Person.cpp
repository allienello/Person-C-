/***********************************
 * Person Class Definitions
 * Written by Allie Ianello
 ***********************************/

#include <iostream>
#include <iomanip>
#include <string>
#include <iomanip>
using namespace std;
using std::left;

#include "Person.h"

/**********************************
 * Null constructor
 **********************************/
person::person()
{
	age = 0;
	first = "";
	last = "";
}

/**********************************
 * Get
 **********************************/
bool person::get(istream& in)
{
	in >> first >> last >> age;
	return(in.good());
}

/**********************************
 * Put
 **********************************/
void person::put(ostream& out)
{
	cout << setw(14) << left << last << setw(8) << left << first << setw(3) << left << age << endl;

}

/**********************************
 * Equals operator
 **********************************/
bool person::operator == (const person& b)
{
	if (age == b.age && first == b.first && last == b.last)
		return true;
	else
		return false;
}

/**********************************
 * Lesser operator
 **********************************/
bool person::operator < (const person& b)
{
	if (last < b.last)
		return true;
	if (last == b.last)
	{
		if (first < b.first)
			return true;
		if (first == b.first)
		{
			if (age < b.age)
				return true;
			else
				return false;
		}
		else
			return false;
	}
	else
		return false;
}

/**********************************
 * Greater operator
 **********************************/
bool person::operator > (const person& b)
{
	if (last > b.last)
		return true;
	if (last == b.last)
	{
		if (first > b.first)
			return true;
		if (first == b.first)
		{
			if (age > b.age)
				return true;
			else
				return false;
		}
		else
			return false;
	}
	else
		return false;
}