#include <iostream>
using namespace std;

int main(){
	int num=0, aux=0, div=1; 
	
	cout << "Digite un numero: ";
	cin  >> num;
	
	aux=num;
	
	while(aux/10!=0){
		aux = aux/10;
		div = div*10;
	}
	
	while(div!=0){
		
		cout  << num/div;
		
		if(div/10!=0){
			cout << "\n";
		}
		num = num%div;
		div = div/10;
	}
	cout << endl;
		
}
