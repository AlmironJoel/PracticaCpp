// Se dispone de un lote de 300 registros (uno por artículo), cada uno de los cuales tiene la
// siguiente información:
// - Número de artículo (4 dígitos no correlativos).
// - Cantidad de unidades en stock.
// - Precio Unitario.
// El lote está desordenado.
// Se dispone de otro lote de registros, cada uno de los cuales corresponde a una venta con la siguiente
// información:
// - Número de cliente (1 a 300).
// - Número de artículo (4 dígitos, no correlativos).
// - Cantidad de unidades vendidas.
// El último registro de este lote tiene número de cliente cero y no debe procesarse. Desarrollar el
// programa que determine e imprima:
// a) Un listado de las ventas realizadas, con el siguiente formato:
// Listado de ventas
// Nro. Cliente/ Nro. Artículo/ Cantidad Vendida /Importe Total
//      99          99               999            999.99
// b) Informar cuál es el número de cliente que más compró en total (en pesos).
// c) Informar cada uno de los números de los artículos que no hayan registrado ventas.

#include <iostream>
using namespace std;

//?Struct
struct loteCarga{
    int numArt;
    int stock;
    float precioUnd;
};

 struct loteRegistro{
    int numCliente;
    int numArt;
    int cantVendida;
 };

 struct listaDeVentas{
    int nroCliente;
    int nroArt;
    int CantVendida;
    float imporTotal;
 };
 
 
//TODO funciones
void cargarLote (loteCarga Vregisto[4]){
    int numArt;
    int stock;
    float precioUnd;
    for (int i = 0; i < 4; i++){
        cout<<"ingrese numero de articulo"<<endl;
        cin>>numArt;
        cout<<"ingrese stock"<<endl;
        cin>>stock;
        cout<<"ingrese precio unitario"<<endl;
        cin>>precioUnd;

        Vregisto[i].numArt=numArt;
        Vregisto[i].stock=stock;
        Vregisto[i].precioUnd=precioUnd;
    }
}

void mostrar(loteCarga Vregistro[4]){
    for (int i = 0; i < 4; i++){
        cout<<"El registro : "<<Vregistro[i].numArt<<" cuenta con un stock de : "<<Vregistro[i].stock<<" y su precio unitario es: $"<<Vregistro[i].precioUnd<<endl;
    }
    
}

void setList (listaDeVentas VlistaVentas[300]){

}

void proceso(loteCarga Vregisto[4],loteRegistro Vproceso[4],listaDeVentas VlistaVentas[300]){
//pedir datos
 int NumeroCliente,numArticulo,CantidadVendida;
 cout<<"ingrese el numero de cliente"<<endl;
 cin>>NumeroCliente;
 cout<<"ingrese el numero de Articulo"<<endl;
 cin>>numArticulo;
 cout<<"ingrese la cantidad que se vendio"<<endl;
 cin>>CantidadVendida;
 int indice = 0;
 while (NumeroCliente!=0){
    for (int i = 0; i < 4; i++){
        if (numArticulo==Vproceso[i].numArt){

        }else{cout<<"Error numero de articulo no encontrado"<<endl;}
    }
    cout<<"ingrese el numero de cliente"<<endl;
    cin>>NumeroCliente;
    cout<<"ingrese el numero de Articulo"<<endl;
    cin>>numArticulo;
    cout<<"ingrese la cantidad que se vendio"<<endl;
    cin>>CantidadVendida;
 }//While
 
}

//todo main
int main(int argc, char const *argv[]){
    loteCarga Vregistro[4];
    loteRegistro Vproceso[4];
    listaDeVentas VlistaVentas[300];
    setList(VlistaVentas);
    cargarLote(Vregistro);
    proceso(Vregistro,Vproceso,VlistaVentas);
    mostrar(Vregistro);
    return 0;
}
