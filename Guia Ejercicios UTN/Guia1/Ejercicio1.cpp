#include <iostream>
using namespace std;
//Hacer un programa para ingresar por teclado la cantidad de horas trabajadas por un operario y el valor que se le paga por hora trabajada y listar por pantalla el sueldo que le corresponda.
int main(int argc, char const *argv[]){
    int h=0,precio,resultado;
    cout<<"ingrese las horas trabajadas"<<endl;
    cin>>h;
    cout<<"ingrese el precio por hora"<<endl;  
    cin>>precio;
    resultado=h*precio;
    cout<<"resultado: "<<resultado<<endl;
    return 0;
}

