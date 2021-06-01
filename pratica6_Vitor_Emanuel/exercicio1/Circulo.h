#ifndef CIRCULO_H
#define CIRCULO_H
#include "Forma2D.h"
#include <string>

class Circulo : Forma2D
{
private:
    std:: string _nome;
    std:: string _cor;
    double _perimetro;
    double _area;
    double _raio;
public:
    
    Circulo(std::string nome,std::string cor,double raio);

    virtual double get_perimetro();
    virtual double get_area();
    virtual std::string get_nome();
    virtual std::string get_cor();
  
    
   
};

#endif