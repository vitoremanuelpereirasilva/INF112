#include "Power.h"

int Power::function_power(int k,int n){
    if(n==1) return k;
    else return k*function_power(k,n-1);
}