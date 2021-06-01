#include<iostream>
#include "Data.h"

Data :: Data(int dia,int mes, int ano){
	
	_dia = dia;
	_mes = mes;
	_ano = ano;
}

void Data::_data_por_barras(){
	
	std::cout<< _dia <<"/"<<_mes<<"/"<<_ano<< std::endl;
	
}  

void Data::_data_por_extenso(){
	
	if(_mes==1) std::cout<< _dia <<" de Janeiro de "<<_ano<< std::endl;
	if(_mes==2) std::cout<< _dia <<" de Fevereiro de "<<_ano<< std::endl;
	if(_mes==3) std::cout<< _dia <<" de Marco de "<<_ano<< std::endl;
	if(_mes==4) std::cout<< _dia <<" de Abril de "<<_ano<< std::endl;
	if(_mes==5) std::cout<< _dia <<" de Maio de "<<_ano<< std::endl;
	if(_mes==6) std::cout<< _dia <<" de Junho de "<<_ano<< std::endl;
	if(_mes==7) std::cout<< _dia <<" de Julho de "<<_ano<< std::endl;
	if(_mes==8) std::cout<< _dia <<" de Agosto de "<<_ano<< std::endl;
	if(_mes==9) std::cout<< _dia <<" de Setembro de "<<_ano<< std::endl;
	if(_mes==10) std::cout<< _dia <<" de Outubro de "<<_ano<< std::endl;
	if(_mes==11) std::cout<< _dia <<" de Novembro de "<<_ano<< std::endl;
	if(_mes==12) std::cout<< _dia <<" de Dezembro de "<<_ano<< std::endl;
		
	
}

long long int Data:: getDataEmSegundos(){
	
	double dias = ((_ano - 1970)* 365.24 ) + (_mes * 30.44) + _dia;

	return ((int) dias) * 86400;
		
} 
