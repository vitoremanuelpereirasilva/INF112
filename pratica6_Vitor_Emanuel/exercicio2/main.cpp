#include<iostream>
#include "Produto.h"
#include "Remedios.h"
#include "ArtigoHigiene.h"
using namespace std;

int main(){

    Remedios *remedio1 = new Remedios("321321654","remedio para dor",20.0,10.0,5.0);
    Remedios *remedio2 = new Remedios("326546546","remedio para vomito",30.0,20.0,10.0);

    ArtigoHigiene *artigo1 = new ArtigoHigiene("54545665","escova de dente",10.0,10.0);
    ArtigoHigiene *artigo2 = new ArtigoHigiene("6465456","sabonete",2.0,1.0);

    cout<<"========REMEDIOS=======\n\n";
    cout<<"CODIGO: "<< remedio1->get_codigo()<<endl ;
    cout<<"DESCRICAO: "<<remedio1->get_descricao()<< endl;
    cout << "PRECO DE COMPRA: "<<remedio1->get_preco_de_compra() << endl;
    cout << "PERCENTUAL DE LUCRO: " << remedio1->get_percentual_de_lucro() <<endl;
    cout <<"VALOR DO DESCONTO: "<< remedio1->get_desconto()<<endl;
    cout<< "VALOR DE VENDA: "<< remedio1->gerarPrecoDeVenda()<< endl;

    cout<< endl;

    cout<<"CODIGO: "<< remedio2->get_codigo()<<endl ;
    cout<<"DESCRICAO: "<<remedio2->get_descricao()<< endl;
    cout << "PRECO DE COMPRA: "<<remedio2->get_preco_de_compra() << endl;
    cout << "PERCENTUAL DE LUCRO: " << remedio2->get_percentual_de_lucro() <<endl;
    cout <<"VALOR DO DESCONTO: "<< remedio2->get_desconto()<<endl;
    cout<< "VALOR DE VENDA: "<< remedio2->gerarPrecoDeVenda()<< endl;

    cout<< endl;

    cout<<"========ARTIGO HIGIENE=======\n\n";
    cout<<"CODIGO: "<< artigo1->get_codigo()<<endl ;
    cout<<"DESCRICAO: "<< artigo1->get_descricao()<< endl;
    cout << "PRECO DE COMPRA: "<<artigo1->get_preco_de_compra() << endl;
    cout << "PERCENTUAL DE LUCRO: " << artigo1->get_percentual_de_lucro() <<endl;
    cout<< "VALOR DE VENDA: "<< artigo1->gerarPrecoDeVenda()<< endl;

    cout<< endl;

    cout<<"CODIGO: "<< artigo2->get_codigo()<<endl ;
    cout<<"DESCRICAO: "<<artigo2->get_descricao()<< endl;
    cout << "PRECO DE COMPRA: "<<artigo2->get_preco_de_compra() << endl;
    cout << "PERCENTUAL DE LUCRO: " << artigo2->get_percentual_de_lucro() <<endl;
    cout<< "VALOR DE VENDA: "<< artigo2 ->gerarPrecoDeVenda()<< endl;

    cout<< endl;


    delete remedio1;
    delete remedio2;
    delete artigo1;
    delete artigo2;


    return 0;
}