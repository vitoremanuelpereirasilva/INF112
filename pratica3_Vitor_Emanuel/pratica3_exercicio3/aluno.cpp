#include<iostream>
#include "aluno.h"

Aluno::Aluno(){
	
	nome_aluno = (char*)NOME;
	matricula_aluno= new int;
	*matricula_aluno = 102013;
   	media_notas_aluno= 0;

	notas_aluno = new double[TAMANHO];

	num_notas_inseridas = 0;  
	
}


void Aluno::adicionarNota(double nota){

	if(num_notas_inseridas==TAMANHO){
		std::cout << "ERRO! Todas as notas ja foram inseridas!" << std::endl;
		exit(1);
	}

	notas_aluno[num_notas_inseridas]= nota;
	num_notas_inseridas++;
	
}

void Aluno::CalcularMediaAluno(){

	for(int i=0;i<num_notas_inseridas;i++) media_notas_aluno += notas_aluno[i];

	media_notas_aluno = media_notas_aluno/num_notas_inseridas;

}

void Aluno::imprimeInformacoesAluno(){
    std::cout << "Nome do Aluno: "<< nome_aluno<< std::endl;
	std::cout<< "Matricula: "<< *matricula_aluno<<std::endl;   

	std::cout<< "Notas: "; 

	for(int i= 0;i<num_notas_inseridas;i++) std::cout<< notas_aluno[i] <<" ";

	std::cout<< std::endl;

	std::cout<<"Media notas: "<< media_notas_aluno<< std::endl;

}

Aluno::~Aluno(){
	delete nome_aluno;
	delete matricula_aluno;
	delete [] notas_aluno;
}