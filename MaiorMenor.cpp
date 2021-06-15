#include<iostream>  
#include<iomanip>
  
using namespace std; 
  
int main() 
{ 
    int numero1;
	int numero2;
	int numero3;
	int soma;
	int media;
	int maior;
	int menor;
	
	cout<<"Entre o primeiro numero: ";
	cin>>numero1;
	cout<<"Entre com o segundo numero: ";
	cin>> numero2;
	cout<<"Entre com o terceiro numero: ";
	cin>> numero3;
	
	soma = numero1 + numero2 + numero3;
	cout<<"Soma = "<<soma<<endl;
	
	media = (numero1 + numero2 + numero3) / 3;
	cout<<"	Media = "<<media<<endl;
	
	if (numero1 > numero2) {
		maior = numero1;
		menor = numero2;
	}
	else {
        maior = numero2;
		menor = numero1;
	}
	
	if (maior > numero3){
		maior = maior;
		menor = numero3;
	}
	else {
		maior = numero3;
	}
	
	cout<<"Maior = "<<maior<<endl;
	
	cout<<"Menor = "<<menor<<endl;
	
	
      
    return 0; 
} 