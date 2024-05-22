#include <iostream>
#include <string>
#include "Urgent_revoc_Deposit.h"

using namespace std;

Urgent_revoc_Deposit::Urgent_revoc_Deposit(int number, int date, double bid, double sum, int reduced_rate, int initial_bid) : Deposit(number, date, bid, sum)
{
	this->reduced_rate = reduced_rate;
	this->initial_bid = initial_bid;
}
void Urgent_revoc_Deposit::print() const
{
	cout << "Type: Urgent_revoc_Deposit" << endl;
	Deposit::print();
	cout << "Reduced rate: \t" << reduced_rate << endl;
	cout << "Initial bid: \t" << initial_bid << endl;
}
int Urgent_revoc_Deposit::get_reduced_rate() const
{
	return reduced_rate;
}
int Urgent_revoc_Deposit::get_initial_bid() const
{
	return initial_bid;
}
void Urgent_revoc_Deposit::set_reduced_rate(int new_reduced_rate)
{
	reduced_rate = new_reduced_rate;
}
void Urgent_revoc_Deposit::set_initial_bid(int new_initial_bid)
{
	initial_bid = new_initial_bid;
}