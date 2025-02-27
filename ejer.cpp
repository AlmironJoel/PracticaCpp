#include <iostream>
using namespace std;
// Una empresa comercializa 15 tipos de artículos y por cada venta realizada
// genera un registro con los siguientes datos:
// • Número de artículo (1 a 15).
// • Cantidad vendida.

// Puede haber varios registros para el mismo artículo y el último se indica
// número de artículo igual a cero.

// Se pide determinar e informar:
// a. El número de artículo que más se vendió en total.
// b. Los números de artículos que no registraron ventas.
// c. La cantidad de unidades vendidas para el artículo número 10.
// Nota: tener en cuenta el concepto de “registro” y el planteo de estructura
// principal separado de consignas (ver videos de ciclos combinados y ejercicios
// resueltos de ciclos combinados).

// Funciones
void initializeMatriz(int Matriz [10][2]){
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 2; j++) {
            Matriz[i][j]=0;
            Matriz[i][0]=i+1;
        }
    }
}

void charge(int Matriz [10][2]){
    int nArt;
    int nSale;

    cout<<"Ingrese numero de Articulo"<<endl;
    cin>>nArt;
    cout<<"ingrese valor de la venta...";
    cin>>nSale;
    
    while (nArt!=0){     

    for (int i = 0; i < 10; i++){
        
        for (int j = 0; j < 1; j++){

            if (Matriz[i][j]==nArt){
                Matriz[i][j+1]+=nSale;
                cout<<"Valor agregado exitosamente en la posicion : "<<Matriz[i][j]<<endl;
            }
        }        
    }
    cout<<"Ingrese numero de Articulo"<<endl;
    cin>>nArt;
    cout<<"ingrese valor de la venta...";
    cin>>nSale;
    }//Finwhile

    //A
    int max=0;
    int listMax;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 1; j++){
            if (Matriz[i][j+1]>max){
                max=Matriz[i][j+1];
                listMax=Matriz[i][j];
            }
        } 
    }
    cout<< "El maximo es : "<<max<<"de la lista : "<<listMax<< endl;

    //B

}//Fincharge


void showMatriz( int Matriz [10][2]){
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 1; j++)
        {
           cout<< "List "<<Matriz[i][j]<<":"<< Matriz[i][j+1]<<endl;
        }
    }
}

int main(int argc, char const *argv[])
{
    int Matriz [10][2];
    initializeMatriz(Matriz);
    charge(Matriz);
     showMatriz(Matriz);
    return 0;
}
