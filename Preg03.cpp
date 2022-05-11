#include<iostream>
using namespace std;

int main(){
 int num,aux,resto,numInv=0;
 
 cout<<"Ingrese numero"<<endl;
 cin>>num;
 
 aux=num;
 
 while(aux>0){
         resto=aux%10;
      aux=aux/10;
      numInv=numInv*10+resto;
 }
 
 if(numInv==num){
  cout<<"Numero es capicua";
 }
 else{
  cout<<"Numero no capicua";
  
 }
 
 return 0;
}
