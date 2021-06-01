class SavingsAccount
{
public:
    SavingsAccount(double saldo);
    static double annualInterestRate;
	double calculateMonthlyInterest();
	static void modifyInterestRate(double annualInterestRate);
	double getmodify();
private:
    
    double savingsBalance;
   
};

