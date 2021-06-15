// Simple C++ program to display "Hello World" 
// Header file for input output functions 
#include<iostream>  
#include<iomanip>
  
using namespace std; 

// main function - 
// where the execution of program begins 
int main() 
{ 
	int **matrix, n;
	cout<<"Digite o tamanho da matriz: ";
	cin>>n;
	matrix = new int*[n];
	for(int i=0; i<n; i++)
		matrix[i]= new int[n];
	
	for(int l=0; l<n; l++)
		for(int c=0; c<n; c++){
			cout<<"Insira um numero: ";
			cin>>matrix[l][c];
		}
	// Calculando a soma das linhas da matriz
	int soma_linha=0, constante_soma=0;
	for(int l=0; l<n; l++){
		cout<<endl;
		soma_linha=0;
		for(int c=0; c<n; c++){
			cout<<matrix[l][c]<<" ";
			soma_linha=soma_linha+matrix[l][c];
		}
		cout<< "Soma Linha: "<< soma_linha;
		if(l==0)
			constante_soma=soma_linha;
		else
			if(soma_linha != constante_soma)
				constante_soma=-1;
	}	
	cout<<endl<<endl;
	//Calculando a soma das colunas da matriz
	int soma_coluna=0;
	for(int c=0; c<n; c++){
		cout<<endl;
		soma_coluna=0;
		for(int l=0; l<n; l++){
			cout<<matrix[l][c]<<" ";
			soma_coluna=soma_coluna+matrix[l][c];
		}
		cout<< "Soma Coluna: "<< soma_coluna;
		if(c==0)
			constante_soma=soma_coluna;
		else
			if(soma_coluna != constante_soma)
				constante_soma=-1;
	}
	//calculando a soma da diagonal principal
	int soma_dp=0;
	for(int x=0; x<n; x++){
		soma_dp=soma_dp+matrix[x][x];
	}	
	if(soma_dp!= constante_soma)
		constante_soma=-1;
	cout<<endl<<"Soma Diagonal Principal: "<<soma_dp<<endl;	
	//calculando a soma da diagonal secundaria
	int soma_ds=0;
	for(int x=0; x<n; x++){
		soma_ds=soma_ds+matrix[x][n-1-x];
	}	
	if(soma_ds!= constante_soma)
		constante_soma=-1;
	cout<<endl<<"Soma Diagonal Secundaria: "<<soma_ds<<endl;	
	
	if(constante_soma>0) cout<<endl<<"Quadrado Magico"<<endl;
	else cout<<endl<<"Nao e Quadrado Magico"<<endl;
	
	for(int i=0; i<n; i++)
		delete [] matrix[i];
	delete [] matrix;
    return 0; 
} 



