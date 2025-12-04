/* Dada una lista de 10 números enteros informar cual es el máximo de los pares.  
Ejemplo A: 2, 10, 20, 8, 25, 13, 36, - 8, -5, 20 se informa máximo: 36 
Ejemplo B 5, -13, 23, 81, -55, -13, 55, 4, 15 ,-20 Se informa máximo: 4 
Ejemplo C: -5, -13, -20, -8, -55, -13, -55, -14, -15, -20 se informa máximo: -8 */

#include <iostream>
using namespace std;
bool esPar (int n);

int main() {
    int n,maxPar;
    bool verificacion=false;
    for (int i = 0; i < 5; i++){
        cout<<"ronda : "<< i+1 <<" ingrese numero"<<"\n";
        cin>>n;
        verificacion=esPar(n);
        if (verificacion){
            maxPar=n;
        }
    }
    cout<<"El maximo par es : "<<maxPar<<"\n";
    return 0;
}

bool esPar (int n){
    if(n%2==0){
        return true;
    }else{
        return false;
    }
}