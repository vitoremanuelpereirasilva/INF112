#include<iostream>
#include "package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

int main(){

    package *pacote1 = new package("Vitor","Manhuacu",10,20);
    TwoDayPackage *pacote2 = new TwoDayPackage("Ronaldo","Manhumirim",15,30,5.0);
    OvernightPackage *pacote3 = new OvernightPackage("Julio","Vicosa",15,20,10.0);

    std::cout<< pacote1->calculateCost()<<std::endl;
    std::cout<< pacote2->calculateCost()<<std::endl;
    std::cout<< pacote3->calculateCost()<<std::endl;

    delete pacote1;
    delete pacote2;
    delete pacote3;

    return 0;
}