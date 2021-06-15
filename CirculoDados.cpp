#include<iostream>  
#include<iomanip>
  
using namespace std; 
  
int main() 
{ 
    float raio;
	float diametro;
	float area, cir;

	
	cout<<"Digite o raio : ";
	cin>>raio;

	
	diametro = raio * 2;
	cout<<"O valor do diametro e = "<< setprecision(2)<<diametro<<endl;
	
	area = (raio * raio) * 3.14;
	cout<<"O valor da area e = 	 = "<<setprecision(2)<<area<<endl;
	
	cir = 3.14 * diametro;
	cout<<"O valor da circunferencia e = 	 = "<<setprecision(2)<<cir<<endl;

	
	
    return 0; 
} 