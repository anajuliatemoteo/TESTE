#include <iostream>
using namespace std;

int main() 
{
	double milhas;
	double quilometros;

	   
	cout << "informe o valor em milhas maritimas: ";
	cin >> milhas;
	
	quilometros = (milhas * 1852) / 1000;
	
	cout << milhas << " milhas maritimas equivale a: " << quilometros << " quilometros; " << endl;
	return 0; 
	
}