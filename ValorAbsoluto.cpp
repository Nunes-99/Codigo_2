#include<iostream>  
#include<iomanip>
#include <stdio.h>
using namespace std; 

double Absoluto(float x)
{
  if( x < 0 ){
        return -x;
  }else{
        return x;
    }
}

int main(void)
{
  float valor;
  cout<<"Digite um valor:"<<endl;
  cin>>valor;
  
  cout<<"Valor: "<<valor;
  
  cout<<"\nO valor absoluto e: "<<Absoluto(valor)<<endl;
  
  return 0;
}