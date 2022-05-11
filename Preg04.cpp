#include <iostream>
using namespace std;
 
int main()
{
	system("color f0");
	int num;
	int div=0;
	
	cout<<"Introduzca por favor un numero entero y le diremos si es perfecto o no."<<endl;
	cout<<"Numero: ";
	cin>>num;
	for (int i=1; i<num; i++){
		if (num%i==0)
			div +=i;
	}
	if (num==div)
	{
		cout<<num<< " es perfecto";
	}
	else
	{
		cout<<num<<" no es perfecto";
	}
	return 0;
}
