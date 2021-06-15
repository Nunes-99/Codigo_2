#include<iostream>  
#include<iomanip>
  
using namespace std; 
  
int main() 
{ 
    int a;
	char ch;
	

	cout<<"Entre com um carater: ";
	cin>>ch;
	
	a = static_cast<int>(ch);
	
	cout << "\n O codigo na tabela ASCII e = "<< a << endl;
	
	cout << "\n Corresponde a letra = "<< static_cast<char>(a) << endl;

	
	
      
    return 0; 
} 