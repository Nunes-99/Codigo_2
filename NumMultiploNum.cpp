#include<iostream>  
#include<iomanip>
  
using namespace std; 
  
int main() 
{ 
    int numero1;
	int numero2;

	
	cout<<"Entre com o primeiro numero: ";
	cin>>numero1;
	
	cout<<"Entre com o segundo numero: ";
	cin>> numero2;

	
	if (numero1%numero2==0)
        cout <<numero1<<" e multiplo de "<<numero2<<endl;
    else
        cout <<numero1<<" nao e multiplo de "<<numero2<<endl;
	
	
      
    return 0; 
} 