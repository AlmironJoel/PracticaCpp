// Hacer un programa para ingresar por teclado el importe de una venta sin el descuento y el importe de esa misma venta con el descuento aplicado y luego informar por pantalla el porcentaje de descuento aplicada a la misma.
// Ejemplo A. Si el importe de la venta sin descuento es $1500 y el importe de la venta con descuento es $1200 entonces el porcentaje de descuento aplicado fue el 20%.
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int num,descuento ;
    float r,sobrante;
    cout<<"ingrese el importe"<<endl;
    cin >> num;
    cout<<"Ingrese el porcentaje a descontar"<<endl;
    cin>>descuento;
    r=num*(100-descuento)/100;
    sobrante=num-r;
    cout<<"El resultado deseado es: "<<r<<" ,su descuento fue de un %"<<descuento<<" ("<<sobrante<<")"<<endl;
    return 0;
}