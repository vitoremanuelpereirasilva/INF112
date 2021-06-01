#include <iostream>
#include <fstream>
#include "Arquivoip.h"


int main(){
    ArquivoIP ip;
    try{
   
        ip.InserindoArquivo();
        ip.EnderecoValido();
        ip.EnderecoInvalido();
       
    }
    catch(std::exception &e){
        std::cout <<e.what() <<std::endl;
    }
    
    
    return 0;
}