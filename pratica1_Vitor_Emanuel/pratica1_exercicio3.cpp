#include<iostream>
using namespace std;

void leDadosJogador(int *pontos,int *x,int *y){
	
	cin>> *pontos;
	cin>> *x;
	cin>> *y;	
	
	
}

struct Jogador {
	int pontos ;
 	int x , y ; 
 };
 
 int main(){
 	
 	Jogador x[5];
 	
 	for(int i=0;i<5;i++){
 		leDadosJogador(&x[i].pontos,&x[i].x,&x[i].y);
	}
	for(int i=0;i<5;i++){
 		cout<< x[i].pontos<<" "<<x[i].x<<" "<<x[i].y<< endl;
	}
 	
 	return 0;
 }
