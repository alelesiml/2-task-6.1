
#pragma once
using namespace std;

class Deposit
{
protected:
	int number;
	int date;
	double bid;
	double sum;
public:
	Deposit(int, int, double, double);
	virtual void print() const;
	int get_number() const;
	int get_date() const;
	double get_bid() const;
	double get_sum() const;
	void set_number(int);
	void set_date(int);
	void set_bid(int);
	void set_sum(int);
};