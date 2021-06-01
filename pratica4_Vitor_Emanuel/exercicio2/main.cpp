#include "aquecedor.h"

int main(){

    aquecedor *ptr = new aquecedor();

    ptr->imprimetemp();

    ptr->aquecer();

    ptr->imprimetemp();

    ptr->resfriar();

    ptr->imprimetemp();

    delete ptr;

    return 0;
}