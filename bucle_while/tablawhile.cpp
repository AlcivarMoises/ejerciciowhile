

#include<iostream>
using namespace std;
int mai()
{

int tabla;
 cout << "Ingrese la tabla de multiplicar que desea imprimir: ";
 cin >> tabla;

    
int k=12;

while(k >= 1)
{

cout << tabla << " x " << k << " = " << (tabla * k) << endl;
k--;

}

return 0 ;
  
}