#include "rectangle.h"
#include<iostream>

int main(){

    rectangle *retangulo = new rectangle();

    retangulo->setlength(10);
    retangulo->setwidth(5);

    std::cout<<"perimetro: "<< retangulo->perimeter()<< std::endl;
    std::cout<<"area: "<< retangulo->area()<< std::endl;

    delete retangulo;

    return 0;
}