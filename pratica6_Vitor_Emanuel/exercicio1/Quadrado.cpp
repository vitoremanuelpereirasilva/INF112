#include "Quadrado.h"

Quadrado::Quadrado(std::string nome,std::string cor,double lado){
    _nome = nome;
    _cor = cor;
    _lado = lado;
    _area = lado*lado;
    _perimetro=lado*4.0;
}

double Quadrado::get_area(){
    return _area;
}

double Quadrado::get_perimetro(){
    return _perimetro;
}

std::string Quadrado::get_nome(){
    return _nome;
}

std::string Quadrado::get_cor(){
    return _cor;
}
