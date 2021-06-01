#include "Alunos.h"

Alunos:: Alunos(std::string nome, double nota1,  double nota2,  int matricula){
    _nome = nome;
    _nota1 =nota1;
    _nota2 = nota2;
    _media = (nota1+nota2)/2.0;
    _matricula = matricula;
}

int Alunos::get_matricula(){
    return this->_matricula;
}

double Alunos::get_media(){
    return this->_media;
}

std::string Alunos::get_nome(){
    return this->_nome;
}
