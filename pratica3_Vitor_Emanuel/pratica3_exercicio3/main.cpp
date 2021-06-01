#include "aluno.h"

int main(){

    Aluno * _aluno = new Aluno();

    
    _aluno->adicionarNota(10);
    _aluno->adicionarNota(8);
    _aluno->adicionarNota(9);
    _aluno->adicionarNota(6);

    _aluno->CalcularMediaAluno();

    _aluno ->imprimeInformacoesAluno();

    _aluno->~Aluno();

    delete _aluno;


    return 0;
}