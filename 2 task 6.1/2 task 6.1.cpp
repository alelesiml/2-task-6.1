#include <iostream>
#include <string>
#include "Deposit.h"
#include "Conditional_Deposit.h"
#include "Urgent_revoc_Deposit.h"
#include "Urgent_irrevoc_Deposit.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	Deposit A(0, 0, 0, 0);
	Conditional_Deposit B(1, 2, 3, 4, "до вступления в брак");
	Urgent_irrevoc_Deposit C( 5, 5, 5, 5, 5, 5);
	Urgent_revoc_Deposit D(1, 1, 1, 1, 1, 1);

	D.print(); cout << endl;
	C.print(); cout << endl;
	B.print(); cout << endl;
	A.print();

	cout << B.get_condition();
	A.set_number(1000); 
	cout << endl;
	A.print();

}
