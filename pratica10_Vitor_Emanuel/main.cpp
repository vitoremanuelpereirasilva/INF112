#include<iostream>
#include<bitset>
#include<algorithm>
#include "Alunos.h"
#include <vector>
#include<string>

bool Compara_por_media( Alunos &a,  Alunos &b){
    return a.get_media() > b.get_media();
}

int main(){

    int matricula = 0;
    double nota1,nota2;
    std::string nome;
    bool a = true;

    std::vector<Alunos> alunos;

    while (a)
    {
        std::cin>> matricula ;

        if(matricula == -1){
            a = false;
        }else{
            std::cin>>  nome >> nota1 >>nota2;
            alunos.push_back(Alunos(nome,nota1,nota2,matricula));
        }

        
    }
    
    sort(alunos.begin(),alunos.end(),Compara_por_media);

    for(int i = 0; i<alunos.size(); i++){

        std::bitset<4> bs(alunos[i].get_matricula());

        std::cout<< bs.flip() << " - " << alunos[i].get_nome() << " - " << alunos[i].get_media()<< std::endl;
    }


    return 0;
}