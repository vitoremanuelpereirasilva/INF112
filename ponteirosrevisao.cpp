#include<iostream>
using namespace std;

int main(){
	
	long int value1= 200000, value2;
	
	long int *longPtr; // a
	
	longPtr = &value1; // b
	
	cout << longPtr << endl; // c
	
	value2 = *longPtr; // d
	
	cout << value2<< endl; // e
	
	cout << &value1 << endl; // f
	
	cout << &longPtr << endl; // g = > explica��o: o valor impresso � diferente, pois como s�o vari�veis diferentes elas ocupam espa�os diferentes na mem�ria.
	
	return 0;
}
