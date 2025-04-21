#include <iostream>
using namespace std;

int main()
{   double valor1;
    double valor2;
	double valor3;
	double valor4;
	double media;
	
	cout << "digite o primeiro valor: ";
	cin >> valor1;
	
    cout << "digite o segundo valor: ";
	cin >> valor2;
	
	cout << "digite o terceiro valor: ";
	cin >> valor3;
	
    cout << "digite o quarto valor: ";
	cin >> valor4;
	
	media = (valor1 + valor2 + valor3 + valor4)/4;
	cout << "media es igual: " << media;
}