// Simple C++ program to display "Hello World" 
// Header file for input output functions 
#include<iostream>  
#include<iomanip>
  
using namespace std; 

// main function - 
// where the execution of program begins 
int main() 
{ 
	int *numeros, tam=3 , i;
	
	numeros = new int[tam];
	for(i=0;i<tam;i++){
		cout<< "Digite o numero "<< i+1<< " :"<<endl;
		cin>> numeros[i];
	}	
	for(i=0;i<tam;i++){
		cout<<numeros[i]<<" ";
		if(numeros[i]%2==0) cout<<" PAR "<< endl;
		else cout << " IMPAR "<<endl;
	}	
	delete [] numeros;
	
	
    return 0; 
} 