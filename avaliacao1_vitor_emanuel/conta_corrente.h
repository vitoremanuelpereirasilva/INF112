#ifndef CONTA_CORRENTE_H
#define CONTA_CORRENTE_H
#include <string>
#include "conta.h"
class contacorrente : public conta{
private:
   
public:
    contacorrente(std::string name,std::string cpf, double saldo);
        
};

#endif