#include<iostream>
#include<cstdlib>
#include <time.h> 
using namespace std;

void preencheAleatorios(int x[],int n){
	
	for(int i=0;i<n;i++){
		
		x[i] = rand() % 10 ;
	}
}

void imprime(int x[],int n){
	
	for(int i=0;i<n;i++){
		cout<<x[i] <<" " ;
	}
	cout << endl;
}

void contaParImpar(int a[],int b[],int n,int &par, int &impar){
	for(int i=0;i<n;i++){
		if((a[i]+b[i])%2==0){
			par++;
		}else{
			impar++;
		}
	
		
	}
}

int main(){
	

	
	while(true){
		
		int jogadas;
		
		int par=0,impar=0;
		 
		cout<<"Digite a quantidade de jogadas a simular:";
		cin>> jogadas;
		
		if(jogadas<0){
			break;
		}
	
		int *a,*b;
		a = new int [jogadas];
		b = new int [jogadas];
		
		
		preencheAleatorios(a,jogadas);
		preencheAleatorios(b,jogadas);
		imprime(a,jogadas);
		imprime(b,jogadas);
		contaParImpar(a,b,jogadas,par,impar);
		cout <<"Par:" << par << endl;
		cout <<"Impar:" << impar << endl;
		
		delete []a;
		delete []b;
	}
		
		
	return 0;
}
