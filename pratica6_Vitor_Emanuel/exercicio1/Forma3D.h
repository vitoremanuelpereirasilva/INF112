#ifndef FORMA3D_H
#define FORMA3D_H
#include "Forma.h"
#include <string>

class Forma3D : public Forma 
{
private:
    
public:
    virtual double get_volume()=0;
    
};


#endif