#include<iostream>
#include<fstream>
#include<string>
#include<vector>


using namespace std;

int main(){

    ifstream arquivo;

    string palavra;
    int sangue[4];
    int cont =0;
    string::size_type sz;
    vector<string> texto;
  
    arquivo.open("teste.txt");



    while (!arquivo.eof())
    {
       getline(arquivo,palavra);
                     
       texto.push_back(palavra);
    }   
    
    
    
    
    for (int i = 0; i < 4; i++)
   {

    sangue[i] = stoi(texto[i],&sz,10);


    sangue[i]+=100 ;
    cout<<sangue[i]<<endl;
   }

   arquivo.close();



    ofstream arquivo2;
    arquivo2.open("teste.txt");

    arquivo2 << sangue[0] <<",A" <<endl;
    arquivo2 << sangue[1] <<",A"<<endl;
    arquivo2 << sangue[2] <<",A" <<endl;
    arquivo2 << sangue[3] <<",A"<<endl;

    arquivo2.close();





    return 0;
}