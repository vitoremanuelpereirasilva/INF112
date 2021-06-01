#include "ArtigoHigiene.h"

ArtigoHigiene::ArtigoHigiene(std::string codigo,std::string descricao,double preco_de_compra,double percentual_de_lucro):
    Produto(codigo,descricao,preco_de_compra,percentual_de_lucro) {}

double ArtigoHigiene::gerarPrecoDeVenda(){
    return get_preco_de_compra() + get_percentual_de_lucro();
}