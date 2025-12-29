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
        int sueldo,sueldoMax,sueldoMin,total,promedio;
        int contadorSueldos=0,contador=0;
        bool banMin=false,banMax=false;

        for (int i = 0; i < 5; i++){
            cout<<"ingresa el sueldo"<<endl;
            cin>>sueldo;
            if (sueldo>50000){
                contadorSueldos++;
            }

            if (!banMax){
                sueldoMax=sueldo;
                banMax=true;
            }else if (sueldo>sueldoMax){
                sueldoMax=sueldo;
            }else if (!banMin){
                sueldoMin=sueldo;
                banMin=true;
            }else if (sueldo<sueldoMin){
                sueldoMin=sueldo;
            }
            total=total+sueldo;
            contador++;
        }
        promedio=total/contador;
        cout<<"Contador de empleados que ganan mas de $50.000 = "<<contadorSueldos<<endl;
        cout<<"El sueldo mas alto fue el de un valor de :"<<sueldoMax<<" mientras que el de valor mas bajo fue : "<<sueldoMin<<endl;
        cout<<"Promedio de sueldo : "<<promedio<<endl;
        return 0;
}