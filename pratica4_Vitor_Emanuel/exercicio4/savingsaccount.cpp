#include<iostream>
#include "savingsaccount.h"

SavingsAccount::SavingsAccount(double saldo){
    this->savingsBalance = saldo;
}
double SavingsAccount::calculateMonthlyInterest(){
	double juros;
	juros = (savingsBalance*(annualInterestRate/100))/12;
	return savingsBalance+juros;
}

void SavingsAccount::modifyInterestRate(double annual){
	annualInterestRate = annual;
}
double SavingsAccount::getmodify(){
    return this-> annualInterestRate;
}