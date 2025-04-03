//Hacer un programa para ingresar por teclado la cantidad de asientos totales en un avión y la cantidad de pasajes ocupados y luego calcular e informar el porcentaje de ocupación y el porcentaje de no ocupación del mismo.
//Ejemplo si el avión tiene 200 asientos totales y se vendieron 80 pasajes, el porcentaje de ocupación que se informará será de un 40% y el porcentaje de no ocupación será de un 60
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int asientosTotal,pasajeros;
    cout<<"ingrese la cantidad total de asientos del Avion"<<endl;
    cin>>asientosTotal;
    cout<<"ingrese la cantidad de pasajeros"<<endl;
    cin>>pasajeros;
    int asientosOcupados;
    asientosOcupados=(pasajeros*100)/asientosTotal;
    int asientosDesocupados;
    asientosDesocupados= 100-asientosOcupados;
    cout<<"El porcentaje de asiento ocupados es :%"<<asientosOcupados<<" y la cantidad de asientos desocupados son el %"<<asientosDesocupados<<endl;
    return 0;
}

