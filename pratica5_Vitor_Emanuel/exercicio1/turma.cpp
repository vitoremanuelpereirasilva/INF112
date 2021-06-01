#include "turma.h"

Turma :: Turma(std::string codigo, int ano):
    _codigo(codigo), _ano(ano) {}

void Turma :: set_codigo(std::string codigo){
    this->_codigo = codigo;
}

void Turma :: set_ano(int ano){
    this->_ano = ano;
}

std::string Turma :: get_codigo(){
    return this->_codigo;
}

int Turma :: get_ano(){
    return this->_ano;
}



