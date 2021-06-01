#include <iostream>
#include "savingsaccount.h"

double SavingsAccount::annualInterestRate = 3.00;

int main(){

	SavingsAccount *saver1 = new SavingsAccount(2000);
	SavingsAccount *saver2 = new SavingsAccount(3000);
	

	std::cout << saver1->calculateMonthlyInterest() <<std::endl;
	std::cout << saver2->calculateMonthlyInterest() <<std::endl;
	
	saver1->modifyInterestRate(4.0);

	std::cout << saver1->calculateMonthlyInterest() <<std::endl;
	std::cout << saver2->calculateMonthlyInterest() <<std::endl;

	delete saver1;
	delete saver2;
	return 0;	
}
