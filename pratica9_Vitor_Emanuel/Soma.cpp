#include "Soma.h"

int Soma::function_soma(int m,int n){
    if(m==n) return m;
    else if(n>m) return m + function_soma(m+1,n);
}