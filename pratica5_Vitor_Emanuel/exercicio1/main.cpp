#include <iostream>

#include "estudante.h"
#include "pessoa.h"
#include "turma.h"

int main() {
    Pessoa pessoa("Julio Reis");
    Turma turma("INF112", 2021);
    Estudante estudante("Jane Doe", 20180101, turma);
    std::cout << "A pessoa é: " << pessoa.get_nome() << std::endl;
    std::cout << "O estudante é: " << estudante.get_nome() << std::endl;
    std::cout << "A turma do estudante é: " << turma.get_codigo() << " " << turma.get_ano() << std::endl;

return 0;
}