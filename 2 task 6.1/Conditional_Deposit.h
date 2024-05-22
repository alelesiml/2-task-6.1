#pragma once
#include <string>
#include "Deposit.h"

class Conditional_Deposit : public Deposit
{
private:
	string condition;
public:
	Conditional_Deposit(int number, int date, double bid, double sum, string condition);
	void print() const override;
	string get_condition() const;
	void set_condition(int);
};