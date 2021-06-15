// Simple C++ program to display "Hello World" 
// Header file for input output functions 
#include<iostream>  
#include<iomanip>
  
using namespace std; 

// main function - 
// where the execution of program begins 
int main() 
{ 
	cout<<fixed<<setprecision(50);
	int y;
	long double e=0, fatorial;
	
	cout<<"Digite a quantidade de termos para calculo: " <<endl;
	cin>>y;
	e = fatorial = 1;
	for(int i=1; i<=y; i++){
		fatorial = fatorial *i;
		e=e+(1/(fatorial));
	}
	cout<<"Constante e = "<<e<<endl;
    return 0; 
} 



