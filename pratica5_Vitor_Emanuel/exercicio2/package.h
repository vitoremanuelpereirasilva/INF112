#ifndef PACKAGE_H
#define PACKAGE_H
#include <string>
class package
{
private:
    std::string _name;
    std::string _adress;
    unsigned int _peso;
    unsigned int _custo_por_kg;
public:
    package(std::string name, std::string adress, unsigned int peso, unsigned int custo);
    std::string get_nome() const;
    std::string get_adress() const;
    unsigned int get_peso();
    unsigned int get_custo();
    virtual double calculateCost();

    
};



#endif