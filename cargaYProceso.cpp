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

void ponerEnFalse(bool VnoVentas[10]){
    for (int i = 0; i < 10; i++)
    {
        VnoVentas[i]=false;
    }
    
}
void mostrarBan(bool VnoVentas[10]){
    for (int i = 0; i < 10; i++)
    {
        if (VnoVentas[i]==true)
        {
           cout<< "No se registro Ventas en la Lista : "<<i+1<<endl;
        }
        
    }
    
}

void ponerEnCero(int countC[10]){
    for (int i = 0; i < 10; i++){
        countC[i]=0;
    }
    
}

void charge(int Matriz [10][2]){
    int nArt;
    int nSale;

    cout<<"Ingrese numero de Articulo"<<endl;
    cin>>nArt;
    cout<<"ingrese valor de la venta...";
    cin>>nSale;
    //C
    int countC[10];
    ponerEnCero(countC);
    
    while (nArt!=0){     

    for (int i = 0; i < 10; i++){
        
        for (int j = 0; j < 1; j++){

            if (Matriz[i][j]==nArt){
                Matriz[i][j+1]+=nSale;
                cout<<"Valor agregado exitosamente en la posicion : "<<Matriz[i][j]<<endl;
                countC[i]++;
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
    //B
    bool VnoVentas[10];
    ponerEnFalse(VnoVentas);
    
    
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 1; j++){
            if (Matriz[i][j+1]>max){
                max=Matriz[i][j+1];
                listMax=Matriz[i][j];
            }

            if (Matriz[i][j+1]==0){
                VnoVentas[i]=true; 
            }
        } 
    }
    
    //Ressultados
    cout<< "El maximo es : "<<max<<" de la lista : "<<listMax<< endl;
    mostrarBan(VnoVentas);
    cout<<"Cantidad de unidades vendidas del articulo 10 son: "<<countC[9]<<endl;

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
