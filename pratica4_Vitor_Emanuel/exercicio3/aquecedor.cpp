#include<iostream>
#include "aquecedor.h"

aquecedor::aquecedor(){
    fator = 5.0;
    temp_max = 40.0;
    temp_min = 10.0;
    
}
aquecedor::aquecedor(double temp_ini){
    temp_min= temp_ini;
    temp_max = 40.0;
    fator = 5.0;
}

aquecedor::aquecedor(double temp_ini, double fat){
    temp_min = temp_ini;
    fator = fat;
    temp_max = 40.0;
}
void aquecedor::aquecer(){
   double aux = temp_min+fator;
   if(aux>temp_max){
       std::cout<< "ERRO!"<< std::endl;
   }else{
       this->temp_min= temp_min+fator;
   }
}

void aquecedor::resfriar(){
    double aux = temp_min-fator;
    if(aux<10.0){
       std::cout<< "ERRO!"<< std::endl;
   }else{
       this->temp_min= temp_min-fator;
   }
}

void aquecedor::imprimetemp(){
    std::cout<< temp_min << std::endl;
}

double aquecedor::getfator(){
    return this->fator;
}

void aquecedor::setfator(double fat){
    fator = fat;
}
    