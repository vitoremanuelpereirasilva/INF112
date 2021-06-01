#include "aquecedor.h"

int main(){

    aquecedor *ptr,*ptr2,*ptr3 ;

    ptr = new aquecedor();
    ptr2 = new aquecedor(20);
    ptr3 = new aquecedor(15,10);

    ptr->imprimetemp();

    ptr->aquecer();

    ptr->imprimetemp();

    ptr->resfriar();

    ptr->imprimetemp();

    ptr2->imprimetemp();

    ptr2->aquecer();

    ptr2->imprimetemp();

    ptr2->resfriar();

    ptr2->imprimetemp();

    ptr3->imprimetemp();

    ptr3->aquecer();

    ptr3->imprimetemp();

    ptr3->resfriar();

    ptr3->imprimetemp();

    delete ptr;
    delete ptr2;
    delete ptr3;

    return 0;
}