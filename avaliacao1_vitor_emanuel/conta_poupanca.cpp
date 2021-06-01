#include "conta_poupanca.h"


contapoupanca::contapoupanca(std::string name,std::string cpf, double saldo ,double rendimento):
    conta(name,cpf,saldo), _rendimento(rendimento){} 

double contapoupanca::getrendimento(){
    return this->_rendimento;
}    
void contapoupanca::muda_rendimento(double rendimento){
    _rendimento = rendimento;
}

double contapoupanca::getsaldo(){    
    return this->saldo_atual+= _rendimento;
}