#ifndef OvernightPackage_H
#define OvernightPackage_H
#include "package.h"
class OvernightPackage:public package
{
private:
    double taxa_adicional_por_kg;
public:
    OvernightPackage(std::string name, std::string adress, unsigned int peso, unsigned int custo,double taxa_adicional);
    virtual double calculateCost() override;
    
};


#endif