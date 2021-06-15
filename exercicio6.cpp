#include<iostream>  
#include<iomanip>
  
using namespace std; 
  
int main() 
{ 
	int totalVendas = 0;
	float salario = 200;
	float comissao = 0;
	
	cout<<"Entre com numeros de venda ou digite -1 para sair: "<<endl;
	cin>>totalVendas;
	
     while(totalVendas != -1){
		comissao = 9 * totalVendas/100;
		
		cout<<"O Salario total e igual a: "<<salario+comissao<<endl;
		
		cout<<"Entre com numeros de venda ou digite -1 para sair: "<<endl;
		cin>>totalVendas;
	 }
	  
    return 0; 
} 