//main.cpp
#include<iostream>
#include "Data.h"

int main(){
	
	Data *data = new Data(2,4,2002);
	
	data->_data_por_barras();
	data->_data_por_extenso();
	
	std::cout<< data->getDataEmSegundos() << std::endl;
		
	delete data;
	
	return 0;
}
