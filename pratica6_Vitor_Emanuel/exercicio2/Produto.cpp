#include "Produto.h"

Produto::Produto(std::string codigo,std::string descricao,double preco_de_compra,double percentual_de_lucro):
    _codigo(codigo),_descricao(descricao),_preco_de_compra(preco_de_compra),_percentual_de_lucro(percentual_de_lucro) {}

std::string Produto::get_codigo(){
    return _codigo;
}
double Produto::get_percentual_de_lucro(){
    return _percentual_de_lucro;
}

double Produto::get_preco_de_compra(){
    return _preco_de_compra;
}

std::string Produto::get_descricao(){
    return _descricao;
}