// Hacer un programa para ingresar por t  eclado el importe de una venta y el porcentaje de descuento aplicada a la misma y luego informar por pantalla el importe a pagar.
// Ejemplo A. Si el importe de la venta es $1200 y el descuento es el 15% entonces el total a pagar será de $1020.
// Ejemplo B. Si el importe de la venta es $800 y el descuento es el 0% entonces el total a pagar será de $800

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int num,descuento ;
    float r;
    cout<<"ingrese el importe"<<endl;
    cin >> num;
    cout<<"Ingrese el porcentaje a descontar"<<endl;
    cin>>descuento;
    r=num*(100-descuento)/100;

    cout<<"El resultado deseado es: "<<r<<endl;
    return 0;
}
