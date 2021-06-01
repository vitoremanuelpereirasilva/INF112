#include "Esfera.h"

Esfera::Esfera(std::string nome,std::string cor,double raio){
    _nome = nome;
    _cor = cor;
    _raio =raio;
    _volume = (4.0/3.0)*3.14*raio*raio*raio;
   
}

double Esfera::get_volume(){
    return _volume;
}

std::string Esfera::get_nome(){
    return _nome;
}

std::string Esfera::get_cor(){
    return _cor;
}

