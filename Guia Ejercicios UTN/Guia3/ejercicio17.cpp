/*Hacer un programa para ingresar un número entero y luego informar todos los 
divisores de ese número.  
Ejemplo A. Si se ingresa 6 se listarán: 1, 2, 3 y 6 
Ejemplo B. Si se ingresa 9 se listarán: 1, 3 y 9. 
Ejemplo 3. Si se ingresa 11 se listarán 1 y 11.*/
#include <iostream>
using namespace std;

int main() {
        int n;
        cout<<"ingrese el numero a verificar"<<endl;
        cin>>n;
        cout<<"Lista de numeros: "<<endl;
        for (int i = 1; i <= n ; i++){
                if (n%i==0){
                        cout<<i<<endl;
                }
        }
        
        return 0;
}