#include<iostream>
#include <string>
#include "conta.h"
#include "conta_corrente.h"
#include "conta_poupanca.h"

int main(){

    conta *conta1 = new conta("vitor","123", 1000);
    contacorrente *conta2 = new contacorrente("eduardo","456", 2000);
    contapoupanca *conta3 = new contapoupanca("julio", "789",2000,500);

    std::cout<< conta1->getsaldo()<< std::endl;
    std::cout<< conta2->getsaldo()<< std::endl;
    std::cout<< conta3->getsaldo()<< std::endl;
    
    delete conta1;
    delete conta2;
    delete conta3;


    return 0;
}