#include<iostream>
#include <fstream>
#include "Keywords.h"
#include <cstring>
#include<vector>

void Keywords::leitura(std::string arquivo){

    std::ifstream texto;

    texto.open(arquivo);

    char a = ' ';
    
    std::string palavra;

    std::string Keywords[3];

    std::vector<std::string> text;

    if(!texto.is_open()){
     throw "Nao foi possivel realizar a abertura/leitura do arquivo.";
 }

    while (!texto.eof())
    {
        std::getline(texto,palavra,a);
        text.push_back(palavra);
    }

    int cont [text.size()] = {0};

    for (int i = 0; i < text.size(); i++)
    {
        for (int j = i+1 ; j < text.size(); j++)
        {
            if(text[i] == text[j] ){
                cont[i]++;
            }
        }
        
    }


    int maior = 0;
    for(int i =0;i<3;i++){

        for (int j = 0; j < text.size(); j++){
            if(cont[j]>maior){
                maior = cont[j];
                Keywords[i] = text[j];
                cont[j] = -1;
                                
             }
        
        }

        maior = 0;
    }

 
    std::cout<<"Palavras-chave: " << Keywords[0] << ", "<< Keywords[1] << ", "<< Keywords[2] <<std::endl;

    


    texto.close();

}
