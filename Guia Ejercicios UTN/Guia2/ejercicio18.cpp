// Una empresa de electricidad cobra el servicio a sus clientes de acuerdo a la siguiente escala: 
// $10 por kilovatio (kW) por el consumo hasta los primeros 100 kW de consumo. 
// $12 por kW por el consumo excedente de 101 a 200 kW. 
// $15 por kW por el consumo excedente de 201 kW en adelante.

// Hacer un programa para que, dado el consumo en kilovatios de un determinado cliente, el programa calcule e informe el total a pagar.
// Ejemplo 1: Un consumo de 55 kW, se calculará: $ 10 x 55= $ 550 
// Ejemplo 2: Un consumo de 125 kW, se calculará: $10 x 100 + $12 x 25 = $1300.
// Ejemplo 3: Un consumo de 250 kW, se calculará: $10 x 100 + $12 x 100 + $15 x 50 = $2950

#include <iostream>

using namespace std;
int main(int argc, char const *argv[]){
    int n,r,aux;
    const int v1= 10;
    const int v2= 12;
    const int v3= 15;
    cout<<"Introduce el Voltaje"<<endl;
    cin>>n;
    r=0;
    if(n<101){
        r= n*v1;
        cout<<"tu resultado de menos 100 es :"<<r<<endl;
    }
    else if (n<201){
        aux=100*v1;
        r=(n-100)*v2+aux;
        cout<<"tu resultado de menos 200 es :"<<r<<endl;
    }  else{
        aux=(100*v1)+(100*v2);
        r=(n-200)*v3+aux;
        cout<<"tu resultado supero los 200 y su total es :"<<r<<endl;
    }

    return 0;
}
