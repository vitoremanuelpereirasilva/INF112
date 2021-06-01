#ifndef PRODUTO_H
#define PRODUTO_H
#include <string>

class Produto
{
private:
    std::string _codigo;
    std::string _descricao;
    double _preco_de_compra;
    double _percentual_de_lucro;
public:
    Produto(std::string codigo,std::string descricao,double preco_de_compra,double percentual_de_lucro);
    virtual double gerarPrecoDeVenda()=0;
    std::string get_codigo();
    double get_preco_de_compra();
    double get_percentual_de_lucro();
    std:: string get_descricao();
    
};

#endif