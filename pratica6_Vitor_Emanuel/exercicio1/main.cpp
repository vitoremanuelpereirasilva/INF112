#include <iostream>
#include "Cubo.h"
#include "Esfera.h"
#include "Circulo.h"
#include "Quadrado.h"
#include "Triangulo.h"
#include "Forma.h"
#include "Forma2D.h"
#include "Forma3D.h"

using namespace std;

int main(){

    Quadrado *quadrado = new Quadrado("Quadrado","Amarelo",10.0);
    Triangulo *triangulo = new Triangulo("Triangulo","Vermelho",10.0,5.0);
    Circulo *circulo = new Circulo("Circulo","Azul",10.0);
    Esfera *esfera = new Esfera("Esfera","Verde", 10.0 );
    Cubo *cubo = new Cubo("Cubo","Preto",10.0);


    cout<< "=========FORMA 2D==========\n"<<endl;

    cout << "NOME: " << quadrado->get_nome()<<endl;
    cout << "COR: " << quadrado->get_cor()<<endl;
    cout << "PERIMETRO: " << quadrado->get_perimetro()<<endl;
    cout << "AREA: " << quadrado->get_area()<<endl;

    cout<<endl;

    cout<< "=========FORMA 3D==========\n"<<endl;

    cout << "NOME: " << cubo->get_nome()<<endl;
    cout << "COR: " << cubo->get_cor()<<endl;
    cout << "VOLUME: " << cubo->get_volume()<<endl;

    delete quadrado;
    delete triangulo;
    delete circulo;
    delete cubo;
    delete esfera;

    return 0;
}