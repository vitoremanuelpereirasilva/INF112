#include "estudante.h"

Estudante::Estudante(std::string nome, int matricula, Turma turma):
    Pessoa(nome), _matricula(matricula), _turma(turma) {}

int Estudante::get_matricula() const {
    return this->_matricula;
}