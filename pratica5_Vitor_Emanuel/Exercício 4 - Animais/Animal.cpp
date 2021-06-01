#include "Animal.h"
#include <vector>

unsigned int Animal::_next_id=1;

unsigned int Animal::get_new_id(){
    _next_id++;
    return _next_id;
}


void popula(std::vector<Animal*>& fazenda, Animal* A, unsigned int max_populacao){
    int escolhido = rand() % fazenda.size();
    fazenda.push_back(A->reproduz());
    if(1){
        popula(fazenda, fazenda[escolhido], max_populacao);
    }
}

Animal::Animal(int id,std::string cor):
    _id(id), _cor(cor) {}