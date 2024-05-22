#pragma once
#include <string>
#include "Deposit.h"


class Urgent_irrevoc_Deposit : public Deposit
{
private:
	int term;
	int period;
public:
	Urgent_irrevoc_Deposit(int number, int date, double bid, double sum, int term, int period);
	void print() const override;
	int get_term() const;
	int get_period() const;
	void set_term(int);
	void set_period(int);
};