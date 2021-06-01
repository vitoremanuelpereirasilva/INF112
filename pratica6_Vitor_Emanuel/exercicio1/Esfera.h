#ifndef ESFERA_H
#define ESFERA_H
#include "Forma3D.h"
#include <string>

class Esfera : Forma3D
{
private:
    std:: string _nome;
    std:: string _cor;
    double _volume;    
    double _raio;
public:
    
    Esfera(std::string nome,std::string cor,double raio);

    virtual double get_volume();    
    virtual std::string get_nome();
    virtual std::string get_cor();
   
    
   
};

#endif