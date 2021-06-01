#include <iostream>
#include "listavetor.h"

ListaVetorInteiros::ListaVetorInteiros() {
	_elementos = new int[TAMANHO]();
	_num_elementos_inseridos = 0;
}

void ListaVetorInteiros::inserir_elemento(int elemento) {
	if (_num_elementos_inseridos == TAMANHO) {
	std::cerr << "Erro, lista cheia" << std::endl;
	exit(1);
}
	_elementos[_num_elementos_inseridos] = elemento;
	_num_elementos_inseridos++;
}

void ListaVetorInteiros::imprimir() {
	for (int i = 0; i < _num_elementos_inseridos; i++)
		std::cout << _elementos[i] << " ";
	std::cout << std::endl;
}

ListaVetorInteiros::~ListaVetorInteiros() {
	delete [] _elementos;
	
}

void ListaVetorInteiros::remover_primeiro(){
	
	int *new_list = new int[TAMANHO];
	
	for(int i =0; i<_num_elementos_inseridos-1;i++){
		
		new_list[i]= _elementos[i+1];
	}
	
	_num_elementos_inseridos--;

	delete [] _elementos;
	
	_elementos=new_list;

		
	
}
void ListaVetorInteiros::remover_ultimo(){
	
	int *new_list = new int[TAMANHO];
	
	for(int i =0; i<_num_elementos_inseridos-1;i++){
		
		new_list[i]= _elementos[i];
	}
	
	_num_elementos_inseridos--;
	
	delete [] _elementos;

	_elementos=new_list;
	
	
		
	
}

void ListaVetorInteiros::inverter(){
	
	int *new_list = new int[TAMANHO];
	
	int j=0;
	
	for(int i =_num_elementos_inseridos-1; i!= -1 ;i--){
		
		new_list[j]= _elementos[i];
		
		j++;
	}

	delete [] _elementos;

	_elementos=new_list;
	
		
}

