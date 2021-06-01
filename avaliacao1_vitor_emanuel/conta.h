#ifndef CONTA_H
#define CONTA_H
#include <string>
class conta{
private:
    std::string _nome;
    std::string _cpf;
    double saldo_atual;
public:
    conta(std::string name,std::string cpf, double saldo);
    virtual double getsaldo();
    void setsaldo(double saldo);
    
};

#endif