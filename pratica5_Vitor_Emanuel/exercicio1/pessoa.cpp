#include "pessoa.h"

Pessoa::Pessoa(std::string nome):
    _nome(nome) {}

std::string Pessoa::get_nome() const {
    return this->_nome;
}