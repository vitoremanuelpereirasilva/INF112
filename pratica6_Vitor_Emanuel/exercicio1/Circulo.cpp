#include "Circulo.h"

Circulo::Circulo(std::string nome,std::string cor,double raio){
    _nome = nome;
    _cor = cor;
    _raio = raio;
    _area = 3.14*raio*raio;
    _perimetro=2.0*3.14*raio;
}

double Circulo::get_area(){
    return _area;
}

double Circulo::get_perimetro(){
    return _perimetro;
}

std::string Circulo::get_nome(){
    return _nome;
}

std::string Circulo::get_cor(){
    return _cor;
}
