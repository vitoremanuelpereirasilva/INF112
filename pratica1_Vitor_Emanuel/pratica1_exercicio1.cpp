#include <iostream>
using namespace std;

void LeiaInteiros(int &a, int &b){
	
    cin>> a >>b;
    
}
void LeiaInteiros(int *a, int *b){
	
    cin >>*a >>*b;
}

int main(){
	
    int a,b;
    
   
    
    LeiaInteiros(a, b);
    
    cout << a <<" "<< b << endl;
    
    LeiaInteiros(&a, &b);

	cout << a <<" "<< b << endl;
	
    return 0;
}
	
	
