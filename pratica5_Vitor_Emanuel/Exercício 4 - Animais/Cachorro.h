#ifndef CACHORRO_H
#define CACHORRO_H

#include <iostream>
#include "Animal.h"

class Cachorro : public Animal {
    public:
        Cachorro(std::string cor);
        virtual Animal* reproduz() override;
        virtual void faz_barulho() override;
        virtual unsigned int get_id() override;
        unsigned int get_new_id();
};


#endif