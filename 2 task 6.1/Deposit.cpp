#include <iostream>
#include <string>
#include "Deposit.h"

using namespace std;

Deposit::Deposit(int number, int date, double bid, double sum)
{
	this->number = number;
	this->date = date;
	this->bid = bid;
	this->sum = sum;
}
void Deposit::print() const
{
	cout << "Number: \t" << number << endl;
	cout << "Date:\t\t" << date << endl;
	cout << "Bid:\t\t" << bid << endl;
	cout << "Sum:\t\t" << sum << endl;
}
int Deposit::get_number() const
{
	return number;
}
int Deposit::get_date() const
{
	return date;
}
double Deposit::get_bid() const
{
	return bid;
}
double Deposit::get_sum() const
{
	return sum;
}

void Deposit::set_number(int new_number)
{
	number = new_number;
}
void Deposit::set_date(int new_date)
{
	date = new_date;
}
void Deposit::set_bid(int new_bid)
{
	bid = new_bid;
}
void Deposit::set_sum(int new_sum)
{
	sum = new_sum;
}