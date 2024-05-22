#include <iostream>
#include <string>
#include "Conditional_Deposit.h"

using namespace std;

Conditional_Deposit::Conditional_Deposit(int number, int date, double bid, double sum, string condition) : Deposit(number, date, bid, sum)
{
	this->condition = condition;
}
void Conditional_Deposit:: print() const
{
	cout << "Type: Conditional_Deposit" << endl;
	Deposit::print();
	cout << "Condition: \t" << condition << endl;
}
string Conditional_Deposit::get_condition() const
{
	return condition;
}
void Conditional_Deposit::set_condition(int new_condition)
{
	condition = new_condition;
}