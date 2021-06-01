#include "ExcecaoSoma.h"
#include "ExcecaoAcimaX.h"
#include <iostream>

int main(){
    
    try{
      ExcecaoSoma *soma = new ExcecaoSoma(80, 5);
      soma->Incluir_Valores();
      delete soma;
    }
    catch (const char* e){
        std::cout<<"erro: "<< e << std::endl;
    }
    catch (std::exception &e){
        std::cout <<"erro: " << e.what() << std::endl;
    }

    
    

    return 0;
}