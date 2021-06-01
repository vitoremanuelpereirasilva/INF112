#ifndef QUADRADO_H
#define QUADRADO_H
#include "Forma2D.h"
#include <string>

class Quadrado : Forma2D
{
private:
    std:: string _nome;
    std:: string _cor;
    double _perimetro;
    double _area;
    double _lado;
public:
    
    Quadrado(std::string nome,std::string cor,double lado);

    virtual double get_perimetro();
    virtual double get_area();
    virtual std::string get_nome();
    virtual std::string get_cor();
  
    
   
};

#endif