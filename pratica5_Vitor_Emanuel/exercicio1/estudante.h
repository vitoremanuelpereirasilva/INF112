#ifndef INF112_ESTUDANTE_H
#define INF112_ESTUDANTE_H
#include "pessoa.h"
#include "turma.h"

class Estudante : public Pessoa {
    private:
        const int _matricula;
        Turma _turma;

    public:
        Estudante(std::string nome, int matricula, Turma turma);
        int get_matricula() const;
};

#endif