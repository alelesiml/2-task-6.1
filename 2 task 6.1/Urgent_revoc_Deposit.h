#pragma once
#include "Deposit.h"
#include <string>

class Urgent_revoc_Deposit : public Deposit
{
private:
	int reduced_rate;
	int initial_bid;
public:
	Urgent_revoc_Deposit(int number, int date, double bid, double sum, int reduced_rate, int initial_bid);
	
	void print() const override;
	int get_reduced_rate() const;
	int get_initial_bid() const;
	void set_reduced_rate(int);
	void set_initial_bid(int);
};