#include "ArquivoIP.h"
#include<iostream>
#include<fstream>
#include "Exception.h"

void ArquivoIP::InserindoArquivo(){
    std::ifstream fin;
    std::ofstream fout;
    fin.open("entrada.txt");
    fout.open("ips.txt");
    int x,y,z,w;

    if(!fin.is_open() || !fout.is_open()){
        throw Exception();
    }
    
    while(!fin.eof()){
        fin>>x;
        fin.ignore();
        
        fin>> y;
        fin.ignore();
        
        fin >> z;
        fin.ignore();
        
        fin >> w;
        fin.ignore();

        if((x>0 && x<255) && (y>0 && y<255) && (z>0 && z<255) && (w>0 && w<255)){
         fout << x <<"." << y <<"."<<z<<"."<<w<<std::endl;
        }

    } 
    fin.close();     
    fout.close(); 
}
void ArquivoIP::EnderecoValido(){
    std::ifstream fout;
    int x,y,z,w;
    fout.open("ips.txt");
    if(!fout.is_open()){
        throw Exception();
    }
    std::cout << "[Enderecos validos:]" << std::endl;
     while(!fout.eof()){
        fout>>x;
        fout.ignore();
        
        fout>> y;
        fout.ignore();
        
        fout>> z;
        fout.ignore();
        
        fout >> w;
        fout.ignore();

        std::cout<< x <<"." << y <<"."<<z<<"."<<w<<std::endl;
        
    }
    fout.close();  
}
void ArquivoIP::EnderecoInvalido(){
    std::ifstream fin;
    int x,y,z,w;
        fin.open("entrada.txt");
        if(!fin.is_open()){
            throw Exception();
        }
        std::cout << "[Enderecos invalidos:]" << std::endl;
        while(!fin.eof()){
        fin>>x;
        fin.ignore();
        
        fin>> y;
        fin.ignore();
        
        fin >> z;
        fin.ignore();
        
        fin >> w;
        fin.ignore();

        if((x<0 || x>255) || (y<0 || y>255) || (z<0 || z>255) || (w<0 || w>255)){
           std::cout <<x <<"."<<y<<"."<<z<<"."<<w<<std::endl;
        }

            }
            fin.close();

}