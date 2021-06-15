// Simple C++ program to display "Hello World" 
// Header file for input output functions 
#include<iostream>  
#include<iomanip>
  
using namespace std; 

void imprime_matrix(char **, int tam);
// main function - 
// where the execution of program begins 
int main() 
{ 
	char **matrix;
	int	n;
	cout<<"Digite o tamanho da matriz: ";
	cin>>n;
	matrix = new char*[n];
	for(int i=0; i<n; i++)
		matrix[i]= new char[n];
	
	for(int l=0; l<n; l++)
		for(int c=0; c<n; c++){
			cout<<"Insira uma letra: ";
			cin>>matrix[l][c];
		}

	imprime_matrix(matrix, n);
	
	for(int i=0; i<n; i++)
		delete [] matrix[i];
	delete [] matrix;
    return 0; 
} 

void imprime_matrix(char **m, int tam){
	for(int l=0; l<tam; l++){
		for(int c=0; c<tam; c++){
			if(l+c != (tam-1))
				cout<<m[l][c]<< " ";
			else
				cout<<" "<< " ";
		}
		cout<<endl;
	}
}

