

#include <iostream>
#include<iomanip>
  
using namespace std; 
  void comparar(float &num1,float &num2, float &dado){
	
	float aux = 0;
	
	if(num1 < dado){
		aux = num1;
		num1 = dado;
		
	}
    if(num1>dado && num2<dado){
       num2 = dado;
    }
	
}

int main() 
{ 
	
	float priMaior = 0;
	float segMaior = 0;
	
	for(int i =0; i <15; i++){
		
		float num1 = 0;
		cout << "digite um numero real: "<<endl;
		cin >> num1;
	
	comparar(priMaior,segMaior,num1);
	
	}
	
	cout<<"Primeiro numero maior: "<<priMaior<<endl;
	cout<<"Segundo numero maior: "<<segMaior<<endl;
    
    return 0; 
}