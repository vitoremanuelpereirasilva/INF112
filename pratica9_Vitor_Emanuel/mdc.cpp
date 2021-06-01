#include "mdc.h"

int MDC::function_mdc(int x, int y){
    if(y==0) return x;
    else return function_mdc(y, x%y);
}