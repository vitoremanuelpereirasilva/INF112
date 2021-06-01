#include <iostream>
#include "PosicoesVetor.h"

int main(){

   PosicoesVetor *vetor = new PosicoesVetor(5);
   
   
    try
    {
        vetor ->Preencher_Vetor();
        
    }
    catch(std::invalid_argument &e)
    {
        std::cerr << e.what()<< '\n';
       

    }
   
    delete vetor;
    return 0;
}