#include<iostream>
#include "Soma.h"
#include "Power.h"
#include "mdc.h"

using namespace std;

int main(){

    Soma soma;
    Power power;
    MDC mdc;
    unsigned int x,y;

    cout<< "====== SOMA =========\n\n" ;
    cout<< "Digite m: ";   cin>>x;
    cout <<"\nDigite n: ";   cin>> y;
    cout << "\n" << soma.function_soma(x,y) << "\n\n";

    cout<< "====== POWER =========\n\n" ;
    cout<< "Digite k: ";   cin>>x;
    cout <<"\nDigite n: ";   cin>> y;
    cout << "\n" << power.function_power(x,y) << "\n\n";

    cout<< "====== MDC =========\n\n" ;
    cout<< "Digite x: ";   cin>>x;
    cout <<"\nDigite y: ";   cin>> y;
    cout << "\n" << mdc.function_mdc(x,y) << "\n\n";



    return 0;
}
