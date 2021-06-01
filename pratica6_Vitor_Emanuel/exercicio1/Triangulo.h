#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "Forma2D.h"
#include <string>

class Triangulo : Forma2D
{
private:
    std:: string _nome;
    std:: string _cor;
    double _perimetro;
    double _area;
    double _lado;
    double _altura;
public:
    
    Triangulo(std::string nome,std::string cor,double lado,double altura);

    virtual double get_perimetro();
    virtual double get_area();
    virtual std::string get_nome();
    virtual std::string get_cor();
   
    
   
};

#endif