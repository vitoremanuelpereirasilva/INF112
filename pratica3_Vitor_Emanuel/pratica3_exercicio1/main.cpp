#include "listavetor.h"

int main(){

	ListaVetorInteiros *vetor = new ListaVetorInteiros();
	
	vetor->inserir_elemento(1);
	vetor->inserir_elemento(2);
	vetor->inserir_elemento(3);
	vetor->inserir_elemento(4);
	vetor->inserir_elemento(5);
	vetor->inserir_elemento(6);
	vetor->imprimir();
	vetor->remover_primeiro();
	vetor->imprimir();
	vetor->remover_ultimo();
	vetor->imprimir();
	vetor->inverter();
	vetor->imprimir();
	vetor->~ListaVetorInteiros();
	
	delete[] vetor;
	
	return 0;
}
