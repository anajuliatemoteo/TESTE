#include <iostream>
using namespace std;

int main() 
{
	double valor1;
	double valor2;
	double valor3;
    double valor4;
    double valor5;
    double ValorPago;
    double ValorTroco;

	cout << "informe o primeiro valor: ";
	cin >> valor1;
	
	cout << "informe o segundo valor: ";
	cin >> valor2;
	
	cout << "informe o terceiro valor: ";
	cin >> valor3;
	
	cout << "informe o quarto valor: ";
	cin >> valor4;

	cout << "informe o quinto valor: ";
	cin >> valor5;
	
	cout << "informe o valorpago: ";
	cin >> ValorPago;
	
	ValorTroco = ValorPago - ( valor1 + valor2 + valor3 + valor4 + valor5);
	
	cout << "o valor do troco es: " << ValorTroco;
	return 0;
}