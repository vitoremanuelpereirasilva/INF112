#include<iostream>
#include "rectangle.h"

float rectangle::getlength(){
	return this->_lenght;
}

float rectangle::getwidth(){
    return this->_widht;
}

rectangle::rectangle(){
    _lenght= 1.0;
    _widht = 1.0;
}

void rectangle::setlength(float lenght){
    if(lenght<0.0 || lenght>20.0){
                std::cout <<"Numero invalido."<<std::endl;
                exit(1);
        }
        else{
		_lenght = lenght;
	}
}
void rectangle::setwidth(float width){
	if(width <0.0 || width >20.0){
                std::cout <<"Numero invalido."<<std::endl;
                exit(1);
        }
        else{
		_widht = width;
	}
}

float rectangle::area(){
    return _widht*_lenght;
}

float rectangle::perimeter(){
    return 2*_lenght+2*_widht;
}