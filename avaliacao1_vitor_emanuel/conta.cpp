#include "conta.h"

conta::conta(std::string name,std::string cpf, double saldo):
    _nome(name),_cpf(cpf),saldo_atual(saldo) {}

double conta::getsaldo(){
    return this->saldo_atual;
}   
void conta::setsaldo(double saldo){
    saldo_atual = saldo;
}     