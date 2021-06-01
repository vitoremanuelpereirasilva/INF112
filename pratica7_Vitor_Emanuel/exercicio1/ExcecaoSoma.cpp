#include "ExcecaoSoma.h"
#include "ExcecaoAcimaX.h"
#include <iostream>
#include <stdexcept>

using namespace std;

ExcecaoSoma::ExcecaoSoma(int x,int n){
    if(x>100){
        throw invalid_argument("O valor de X sendo maior que 100 nao e permitido");
    }else{
        _x =x;
        _n = n;
        elementos= new int [n];
    }
   
}

ExcecaoSoma::~ExcecaoSoma(){
    delete [] elementos;
}

void ExcecaoSoma::Incluir_Valores(){
    int cont = 0,soma = 0, somafinal =0;

    for(int i = 0;i<_n;i++){
        cin>> elementos[i];
        
        if(elementos[i] <= 0 ||  cin.fail()){
            throw invalid_argument("Numero nao permitido, valor igual ou abaixo de 0 ou nao e um numero");
        }
    }

    for(int i = 0;i<_n;i++){
        soma+=elementos[i];
        if(soma > _x){
            throw ExcecaoAcimaX();
        }else{
            somafinal= soma;
            cont++;
        }
    }

    cout << "Soma: "<< somafinal <<endl;
    cout <<"Media: " <<somafinal/cont <<endl;
    cout <<"Quantidade de numeros: " <<cont <<endl;
    cout<<std::endl;  


}