#include <iostream>
#include "OvernightPackage.h"

OvernightPackage::OvernightPackage(std::string name, std::string adress, unsigned int peso, unsigned int custo,double taxa_adicional):
    package(name,adress,peso,custo), taxa_adicional_por_kg(taxa_adicional) {}

double OvernightPackage::calculateCost(){
    double custo= double(get_custo());
    custo += taxa_adicional_por_kg;
    double custo_real = custo*get_peso();
    return custo_real;
}