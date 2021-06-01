#include<iostream>
#include "aquecedor.h"

aquecedor::aquecedor(){
    temperatura =20.0;
}

void aquecedor::aquecer(){
    temperatura += 5.0;
}

void aquecedor::resfriar(){
    temperatura -= 5.0;
}

void aquecedor::imprimetemp(){
    std::cout<< temperatura << std::endl;
}