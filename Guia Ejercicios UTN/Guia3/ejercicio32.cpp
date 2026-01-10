/*
Se ingresa una lista de 10 números enteros y se pide determinar si la lista está 
formada por todos números alternados entre pares e impares o impares y 
pares. 
Ejemplo A: 8, 7, 10, -5, 20, 3, -10, 5, -10, -7 se lista el cartel “Alternados”. 
Ejemplo B: 5, 12, -5, 10, 13, 40, -11, 6, -7, -6 se lista el cartel “Alternados”. 
Ejemplo C: 5, 5, -5, 10, 10, 40, -11, 6, -7, -6 se lista el cartel “No Alternados”. 
*/
#include <iostream>

using namespace std;
//declarar funciones
bool esPar(int numero);

int main() {
    int n,count=0;
    for (int i = 0; i < 10; i++){
        cout<<"Ingrese numero"<<endl;
        cin>>n;
        bool valor=esPar(n);
        if (valor){
            count++;
        }
    }
    if (count==5){
        cout<<"Alternados"<<endl;
    }else{
        cout<<"NO Alternados"<<endl;
    }
    
    return 0;
}
//funiciones
bool esPar(int numero) {
    if (numero % 2 == 0){
        return true;
    }
}