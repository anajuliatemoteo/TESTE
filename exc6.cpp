#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double valor1;
	double valor2;
	double MediaGeometrica;
	
	cout << "informe o primeiro valor: ";
	cin >> valor1;
	
	cout << "informe o segundo valor: ";
	cin >> valor2;
	
	MediaGeometrica = sqrt(valor1 * valor2);
	cout << "Media Geometrica es igual: " << MediaGeometrica;
	return  0;
	
}