#include <iostream>
using namespace std;
// Se ingresa una lista de 10 números en un vector. Se pide ordenar dichos
// números en forma decreciente (de mayor a menor). Mostrar el listado
// ordenado informando también la posición original de cada número en el
// vector.
// Pista: usar ciclos combinados.

//?Funciones

void ingresarNum(int Vnum[10]){
    int num;
    for (int i = 0; i < 10; i++){
        cout<<"ingrese numero"<<endl;
        cin>>num;
        Vnum[i]=num;
    }
    cout<<"Lista de numeros Cargados!";
}

void copiarArray(){
    
}

int main(int argc, char const *argv[]){
    int Vnum[10];
    ingresarNum(Vnum);
    int Vcopia[10];
    copiarArray(Vcopia);

    return 0;
}
