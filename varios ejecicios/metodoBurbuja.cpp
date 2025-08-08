#include <iostream>
using namespace std;
// Se ingresa una lista de 10 números en un vector. Se pide ordenar dichos
// números en forma decreciente (de mayor a menor). Mostrar el listado
// ordenado informando también la posición original de cada número en el
// vector.
// Pista: usar ciclos combinados.

//?Funciones

void ingresarNum(int Vnum[10],int orden[10]){
    int num;
    for (int i = 0; i < 10; i++){
        cout<<"ingrese numero"<<endl;
        cin>>num;
        Vnum[i]=num;
        orden[i]=i+1;
    }
    cout<<"Lista de numeros Cargados!"<<endl;
}
void mostrarArray(int Vnum[10],int orden[10]){
    for (int i = 0; i < 10; i++){
        cout<<"El Numero: "<<Vnum[i]<<" Se encontraba originalmente en el indice : "<<orden[i]<<endl;
    }
}

void proceso(int Vnum[10],int orden[10]){
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 9; j++){
            if (Vnum[j]>Vnum[j+1]){
                int aux;
                aux=Vnum[j+1];
                Vnum[j+1]=Vnum[j];
                Vnum[j]=aux;
                aux=orden[j+1];
                orden[j+1]=orden[j];
                orden[j]=aux;
            }
          }
         }

    mostrarArray(Vnum,orden);
}

int main(int argc, char const *argv[]){
    int Vnum[10];
    int orden[10];
    ingresarNum(Vnum,orden);
    proceso(Vnum,orden);
    return 0;
}
