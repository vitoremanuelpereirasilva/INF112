#ifndef CONTA_POUPANCA_H
#define CONTA_POUPANCA_H
#include <string>
#include "conta.h"
class contapoupanca :public conta
{
private:
    double _rendimento;
public:
    contapoupanca(std::string name,std::string cpf, double saldo, double rendimento);
    virtual double getsaldo() override;
    void muda_rendimento(double rendimento);
    double getrendimento();
    
};

#endif