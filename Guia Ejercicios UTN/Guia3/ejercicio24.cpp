/*
Hacer un programa que permita ingresar el sueldo de 10 empleados y 
determine: - - - - 
El sueldo máximo. 
El sueldo mínimo. 
El sueldo promedio. 
Cantidad de sueldos mayores a $50000.
*/
#include <iostream>
using namespace std;

int main() {
        int sueldo,sueldoMax,sueldoMin;
        int contador=0;
        bool banMin=false,banMax=false;

        cout<<"ingresa el sueldo"<<endl;
        for (int i = 0; i < 5; i++){
            cin>>sueldo;
            if (sueldo>50000){
                contador++;
            }
        }
        
        

        
        return 0;
}