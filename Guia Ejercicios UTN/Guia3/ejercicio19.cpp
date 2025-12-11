/*  Hacer un programa para ingresar un número entero y luego informar la cantidad 
de divisores de ese número.  
Ejemplo A. Si se ingresa 6 se listará: 4 divisores.  
Ejemplo B. Si se ingresa 9 se listará: 3 divisores.  
Ejemplo C. Si se ingresa 11 se listará: 2 divisores. */
#include <iostream>
using namespace std;

int main() {
    int n,count=0;
    cout<<"ingrese el numero a verificar"<<endl;
    cin>>n;
    for (int i = 1; i <= n ; i++){
        if (n%i==0){
            count++;
        }
    }
    cout<<"Cantidad de divisores: "<<count<<endl;
    return 0;
}