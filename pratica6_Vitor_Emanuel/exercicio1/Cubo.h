#ifndef CUBO_H
#define CUBO_H
#include "Forma3D.h"
#include <string>

class Cubo : Forma3D
{
private:
    std:: string _nome;
    std:: string _cor;
    double _volume;    
    double _lado;
public:
    
    Cubo(std::string nome,std::string cor,double lado);

    virtual double get_volume();    
    virtual std::string get_nome();
    virtual std::string get_cor();
   
    
   
};

#endif