// Hacer un programa para ingresar el importe de una compra y el descuento a aplicar. Listar por pantalla, el importe sin descuento, el descuento aplicado y el importe total a cobrar.
// Ejemplo: se ingresa importe 4500, descuento 40; se deberá mostrar
// Importe: 4500, Descuento: 1800, total: 2700.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    float importe,resultadoDesc;
    int descuento,resultado;

    cout<<"Ingrese el importe";
    cin>>importe;
    cout<<"ingrese el descuento";
    cin>>descuento;
    resultadoDesc=descuento*importe/100;
    resultado=importe-resultadoDesc;
    cout<<"El resultado es Importe: "<<importe<<",descuento: "<<resultadoDesc<<"Total: "<<resultado<<"."<<endl;
    return 0;
}
