//Una concesionaria de autos paga a los vendedores un sueldo fijo de $5000 más $700 de premio por cada auto vendido. Hacer un programa que permita ingresar por teclado la cantidad de autos vendidos por un vendedor y luego informar por pantalla el sueldo total a pagar.
//Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a pagar es de $7800

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
    const int sueldo=5000;
    const int premio= 700;
    int autos,r;
    cout<<"ingrese la cantidad de autos vendidos";
    cin>>autos;
    r=sueldo+(premio*autos);
    cout<<"el resultado fue: "<< r<<endl;
    return 0;
}
