#include<iostream>
#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(std::string name, std::string adress, unsigned int peso, unsigned int custo,double taxa):
    package(name,adress,peso,custo), taxa_fixa(taxa) {}

double TwoDayPackage::calculateCost(){
    int custo= get_custo()*get_peso();
    double custo_real = double(custo);

    return custo_real + taxa_fixa;
}    