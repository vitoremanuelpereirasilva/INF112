#include <iostream>
#include "PosicoesVetor.h"
#include <exception>
#include<string>

using namespace std;

PosicoesVetor :: PosicoesVetor(int y){
    _y = y;
    vetor = new int [y];
}

void PosicoesVetor::Preencher_Vetor(){
    int valor, pos;
    
    for(int i =0;i<_y;i++){
        cout << "Digite a posicao e o elemento do vetor:"<<endl;
        cin>> pos>> valor;
        
        if(pos>= _y){
            throw invalid_argument("Posicao invalida!");            
        }else if( cin.fail()){
            throw invalid_argument("Valor informado nao e um numero");
           
        }else{
            vetor[pos] = valor;
        }

       

    }

}

PosicoesVetor::~PosicoesVetor(){
    delete []vetor;
}