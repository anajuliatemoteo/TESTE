#include <iostream>
using namespace std;

int main() 
{ double diametro;
  double area;
  
  cout << "informe o diametro: ";
  cin >> diametro;
  
  area = 3.14 * ((diametro/2)*(diametro/2));
  cout << "area do circulo es: " << area;
  return 0;
	
}