#include <iostream>
using namespace std;

int main()
{
	double area;
	double diagonal;
	
	cout << "informe a diagonal do quadrado: ";
	cin >> diagonal;
	
	area =  (diagonal * diagonal)/2;
	cout << "area es igual: " << area;
}