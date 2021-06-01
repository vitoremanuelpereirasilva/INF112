#ifndef POSICOES_VETOR_H
#define POSICOES_VETOR_H
class PosicoesVetor
{
private:
    int _y;
    int *vetor;
public:
    PosicoesVetor(int y);
    ~PosicoesVetor();
    void Preencher_Vetor();
};


#endif