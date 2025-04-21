#include <iostream>
using namespace std;

int main()
{
	double area;
	double base;
	double altura;
	
	cout << "informe o valor da base: ";
	cin >> base;
	
	cout << "informe o valor da altura: ";
	cin >> altura;
	
	area = (base * altura)/2;	
    cout << "area es igual: " << area;
}