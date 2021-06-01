#include "Remedios.h"

Remedios::Remedios(std::string codigo,std::string descricao,double preco_de_compra,double percentual_de_lucro, double valor_do_desconto):
    Produto(codigo,descricao,preco_de_compra,percentual_de_lucro), _valor_do_desconto(valor_do_desconto) {}

double Remedios::gerarPrecoDeVenda(){
    return get_preco_de_compra() + get_percentual_de_lucro() - _valor_do_desconto;
}

double Remedios::get_desconto(){
    return _valor_do_desconto;
}