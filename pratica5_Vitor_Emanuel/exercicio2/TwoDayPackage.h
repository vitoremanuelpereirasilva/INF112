#ifndef TwoDayPackage_H
#define TwoDayPackage_H
#include "package.h"


class TwoDayPackage:public package
{
private:
    double taxa_fixa;
public:
    TwoDayPackage(std::string name, std::string adress, unsigned int peso, unsigned int custo,double taxa);
    virtual double calculateCost() override;
    
};

#endif