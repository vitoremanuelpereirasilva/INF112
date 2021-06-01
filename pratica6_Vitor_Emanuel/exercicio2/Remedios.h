#ifndef REMEDIOS_H
#define REMEDIOS_H
#include "Produto.h"

class Remedios : public Produto
{
private:
   double _valor_do_desconto;
public:

    Remedios(std::string codigo,std::string descricao,double preco_de_compra,double percentual_de_lucro, double valor_do_desconto);
    virtual double gerarPrecoDeVenda();
    double get_desconto();
};

#endif