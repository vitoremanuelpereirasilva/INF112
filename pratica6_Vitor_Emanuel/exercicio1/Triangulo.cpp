#include "Triangulo.h"

Triangulo::Triangulo(std::string nome,std::string cor,double lado,double altura){
    _nome = nome;
    _cor = cor;
    _lado = lado;
    _altura=altura;
     _area = (lado*altura)/2.0;
     _perimetro=lado*3.0;
}

double Triangulo::get_area(){
    return _area;
}

double Triangulo::get_perimetro(){
    return _perimetro;
}

std::string Triangulo::get_nome(){
    return _nome;
}

std::string Triangulo::get_cor(){
    return _cor;
}
