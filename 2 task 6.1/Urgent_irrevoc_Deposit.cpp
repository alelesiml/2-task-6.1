#include <iostream>
#include <string>
#include "Urgent_irrevoc_Deposit.h"

using namespace std;

Urgent_irrevoc_Deposit::Urgent_irrevoc_Deposit(int number, int date, double bid, double sum, int term, int period) : Deposit(number, date, bid, sum)
{
	this->term = term;
	this->period = period;
}
void Urgent_irrevoc_Deposit:: print() const
{
	cout << "Type: Urgent_irrevoc_Deposit" << endl;
	Deposit::print();
	cout << "Term: \t\t" << term << endl;
	cout << "Period: \t" << period << endl;
}
int Urgent_irrevoc_Deposit::get_term() const
{
	return term;
}
int Urgent_irrevoc_Deposit::get_period() const
{
	return period;
}
void Urgent_irrevoc_Deposit::set_term(int new_term)
{
	term=new_term;
}
void Urgent_irrevoc_Deposit::set_period(int new_period)
{
	period = new_period;
}