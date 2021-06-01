#include "Relatorio.h"
#include<iostream>

int main(){

    try
    {
       Relatorio relatorio;
       relatorio.Gerar_Relatorio();
    }
    catch(const char *e)
    {
        std::cerr << e << '\n';
    }
    

    return 0;
}

