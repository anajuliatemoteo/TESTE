#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
	double x;
	double y;
	double resultado;
	
	cout << "digite o valor de x: ";
	cin >> x;
	
	cout << "digite o valor de y: ";
	cin >> y;
	
	resultado = pow(x, y);
	
	cout << x << " elevado a " << y << " es " << resultado;
	return 0;
}