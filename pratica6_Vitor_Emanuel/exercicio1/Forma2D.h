#ifndef FORMA2D_H
#define FORMA2D_H
#include "Forma.h"
#include <string>

class Forma2D : public Forma 
{
private:
    
public:
    virtual double get_area()=0;
    virtual double get_perimetro()=0;
};


#endif