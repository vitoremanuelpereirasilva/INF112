#include <iostream>
#include "Cachorro.h"
#include "Animal.h"

Cachorro::Cachorro(std::string cor):
    Animal(get_new_id(),cor) {}
    

Animal* Cachorro::reproduz(){
    Animal* filhote= new Cachorro(_cor);
    return filhote;
}
void Cachorro::faz_barulho(){
    std::cout<<"Au Au"<<std::endl;
}

unsigned int Cachorro::get_id(){
    return _id;
}

unsigned int Cachorro::get_new_id(){
    _id++;
    return _id;
}