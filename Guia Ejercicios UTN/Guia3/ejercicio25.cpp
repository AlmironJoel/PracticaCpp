/*
Hacer un programa que permita ingresar el legajo y sueldo de 10 empleados y 
determine: - 
El legajo del empleado con mayor sueldo
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;
int legajo [5];
int sueldo[5];
int maxSueldo=0;
int main() {
    for (int i = 0; i < 5; i++){
        cout<<"ingrese el legajo."<<endl;
        cin>>legajo[i];
        cout<<"ingrese el sueldo de empleado"<<endl;
        cin>>sueldo[i];
    }

    for (int i = 0; i < 5; i++){
        if (sueldo[i]>maxSueldo){
            maxSueldo=i;
        }
    }
    cout<<"El sueldo maximo fue : "<<sueldo[maxSueldo]<<endl;
    cout<<"Numero de legajo del sueldo mas alto fue : "<<legajo[maxSueldo]<<endl;
    
    return 0;
}