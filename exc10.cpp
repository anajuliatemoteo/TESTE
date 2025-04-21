#include <iostream>
using namespace std;

int main() 
{ double CotacaoD;
  double dolar;
  double real;
  
	cout << "informe a cotacao do dolar: ";
	cin >> CotacaoD;
	
	cout << "informe a quantidade de dolares: ";
	cin >> dolar;
	
	real = CotacaoD * dolar;
	
	cout << "o valor em reais es: " << real << "R$" << endl;
	return 0; 
}