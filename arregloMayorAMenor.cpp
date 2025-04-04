#include <iostream>
using namespace std;

// Dada una lista de 10 números enteros, cargarlos en un vector. Luego,
// determinar e informar si el vector está ordenado en forma creciente. Por
// ejemplo el vector con los valores 1, 3, 5, 7 y 9 está ordenado; el vector 1, 5, 3, 7
// y 9 no lo está.

//Funciones
void cargarNumeros (int n[10]){
    for (int i = 0; i < 10; i++)
    {
    int num;
    cout<<"Introduzca numero...";
    cin>> num;
    n[i]=num;
    }
}

int verificarOrden(int Vnum[10]){
    for (int i = 0; i < 9; i++) {
        if (Vnum[i] > Vnum[i + 1]) {
            return false;
        }
    }
    return true;   
 }

void mostrarNumeros(int n[10]){
    for (int i = 0; i < 10; i++)
    {
        cout<<n[i]<<endl;
    }
}

//Main
int main(int argc, char const *argv[])
{
    int Vnum[10];
    cargarNumeros(Vnum);
    bool Ban = verificarOrden(Vnum);
    
    if (Ban){
        cout<< "Los numeros estan ordenados de menor a mayor"<< endl;
    }else {
        cout<< "Los numeros no estan ordenados"<< endl;
    }
    cout<< "Lista de numeros: "<<endl;
    mostrarNumeros(Vnum);    
    return 0;
}
