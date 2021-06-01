#ifndef ARTIGO_HIGIENE_H
#define ARTIGO_HIGIENE_H
#include "Produto.h"

class ArtigoHigiene : public Produto
{
private:
   
public:
    ArtigoHigiene(std::string codigo,std::string descricao,double preco_de_compra,double percentual_de_lucro);
    virtual double gerarPrecoDeVenda();
    
};

#endif