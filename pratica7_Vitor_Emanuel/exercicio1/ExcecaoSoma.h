#ifndef EXCECAOSOMA_H
#define EXCECAOSOMA_H

class ExcecaoSoma{
private:
    int _x ;
    int _n ;
    int *elementos;
public:
    ExcecaoSoma(int x,int n);
    ~ExcecaoSoma();
    void Incluir_Valores();
};

#endif