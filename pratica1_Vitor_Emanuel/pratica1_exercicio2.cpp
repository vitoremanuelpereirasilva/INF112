#include<iostream>
using namespace std;

int calculaTamanhoString1 ( char str[] ){
	
	int cont=0;
	
	for(int i=0; str[i]!='\0';i++){
		cont++;
	}
	
	return cont;
		
}

int calculaTamanhoString2 ( char str[] ){
	
	int cont=0;
	
	for(char *i=str; *i!='\0';i++){
		cont++;
	}
	
	return cont;
		
}

int calculaTamanhoString3 ( char str[] ){
	
	char *i= str;
	
    for(;*i!= '\0';i++){
	}
    
    return (i-str)/sizeof(char);
		
}



int main () {
	
 char str [51];
 
 cout << " Digite alguma string ... ( com ate 50 caracteres ):";
 
 cin.getline ( str , 50) ;
 
 cout << " Tamanhos calculados :" << endl ;
 
 cout << calculaTamanhoString1 ( str ) << " " << calculaTamanhoString2( str ) << " " << calculaTamanhoString3 ( str ) ;

 cout << endl ;
 
 return 0;
 
 }
