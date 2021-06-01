#include "conta_corrente.h"
#include "conta.h"

contacorrente::contacorrente(std::string name,std::string cpf, double saldo):
    conta(name,cpf,saldo) {}
