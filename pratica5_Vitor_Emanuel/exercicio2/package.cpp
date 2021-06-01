#include<iostream>
#include "package.h"

using namespace std;
 
package::package(std::string name, std::string adress, unsigned int peso, unsigned int custo):
  _name(name), _adress(adress), _peso(peso), _custo_por_kg(custo){}

std::string package::get_nome() const{
    return this->_name;
}

std::string package::get_adress() const{
    return this->_adress;
}
unsigned int package::get_peso(){
    return this->_peso;
}
unsigned int package::get_custo(){
    return this->_custo_por_kg;
}
double package::calculateCost(){
    return _custo_por_kg*_peso;
}
   