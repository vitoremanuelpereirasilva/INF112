#include "Keywords.h"
#include<iostream>


int main(){

    try
    {
       Keywords palavra_chave;
       palavra_chave.leitura("arquivo.txt");
    }
    catch(const char *e)
    {
        std::cerr << e << '\n';
    }
    




    return 0;
}
