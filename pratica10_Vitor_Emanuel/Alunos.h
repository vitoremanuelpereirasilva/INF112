#ifndef ALUNOS_H
#define ALUNOS_H
#include<string>


class Alunos
{
private:
    std::string _nome;
    double _nota1;
    double _nota2;
    int _matricula;
    double _media;
    
public:
    Alunos(std::string nome, double nota1,  double nota2,  int matricula);
    double get_media();
    int get_matricula();
    std::string get_nome();
    
};

#endif
