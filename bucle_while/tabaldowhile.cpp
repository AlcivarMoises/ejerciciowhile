
//diseñe unprograma que genere un numero aleatoreo
//El usuario debe adivinar el numero en 3 oportunidades 
//uso numeros aleatorios y blucle while o do while 
#include <iostream>
#include <cstdlib> 
#include <time.h>   
using namespace std;

int main() {
    int num_usuario;
   
    srand(time(NULL));
    int aleatorio = 1 + rand() % (50);
    while ( int intento = 1; intento <= 3; ++intento) {
        
    cout << "Ingresa un numero: ";
    cin>>num_usuario; 
    
    cout<<endl<<"el numero generado es"<<endl<<aleatorio;

    if(num_usuario < aleatorio)

    cout<<endl<<"Ingresaste el"<< num_usuario <<endl<<".Debes ingresar uno mayor"<<endl;

    else if (num_usuario > aleatorio)

    {

    cout<<endl<<"Ingresaste el"<< num_usuario <<endl<<".Debes ingresar uno menor";

    }
    else

    cout<<endl<<"Felicidades, ganaste una beca en la puce esmeraldas";
    

    }
  

    return 0;
}