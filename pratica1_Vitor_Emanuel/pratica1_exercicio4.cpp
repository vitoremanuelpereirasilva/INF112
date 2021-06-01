#include<iostream>
using namespace std;

int main(){
	
	char str[]= "abc teste";
	
	for(char *ptr = str + sizeof(str)-2 ;ptr != str-1; ptr--){
		cout<< *ptr;
	}
	
	cout<< endl;
	
	return 0;
}
	
	
