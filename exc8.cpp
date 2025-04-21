#include <iostream>
using namespace std;

int main() 
{
	double GrausC;
	double fahrenheit;
	
	cout << " informe a temperatura em graus celsius: ";
	cin >> GrausC;
	
	fahrenheit = (GrausC * 9/5) + 32; 
	
	cout << " sua temperatura es: " << fahrenheit << " fahrenheit";
	return 0;
	
}