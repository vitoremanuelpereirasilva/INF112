#include<cstring>
#include<iostream>
#include "Relatorio.h"
#include <fstream>
#include<vector>
#include<cstdlib>

void Relatorio::Gerar_Relatorio(){

    std::ifstream arquivo_entrada;
    std::ofstream arquivo_saida;

    arquivo_entrada.open("funcionarios.txt");
    arquivo_saida.open("relatorio.txt");

    if(!arquivo_entrada.is_open()){
     throw "Nao foi possivel realizar a abertura/leitura do arquivo.";
    }
    if(!arquivo_saida.is_open()){
     throw "Nao foi possivel realizar a abertura/leitura do arquivo.";
    }

    std::string palavra;
    std::vector<std::string> text;
    double gasto[6];
    int j = 0;
    double gasto_total=0, gasto_medio;
    char texto[51]="";
    
    
    while (!arquivo_entrada.eof())
    {
        std::getline(arquivo_entrada,palavra);
        text.push_back(palavra);
        
        for (int i = 0; i < palavra.size(); i++)
        {
            texto[i]= palavra[i];
        }
              
        gasto[j] = atof(texto);
        
        j++;
    }

    


    for (int i = 0; i < 6; i++)
    {
        gasto_total+=gasto[i];
       

    }

    gasto_medio = gasto_total/6.0;

    arquivo_saida<< "Nro.    Funcionario   Gasto   %" << std::endl ;
    for (int i = 0; i < 6; i++)
    {
        arquivo_saida<< i+1 << " "<< text[i] <<" " <<(gasto[i]/gasto_total)*100.0 << "%" << std::endl;
    }

    arquivo_saida<<"Gasto mensal total: R$" << gasto_total<<std::endl;
    arquivo_saida<<"Gasto medio por funcionario: R$"<<gasto_medio << std::endl;


    arquivo_entrada.close();
    arquivo_saida.close();
}