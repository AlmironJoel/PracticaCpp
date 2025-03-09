#include <iostream>
using namespace std;
//Una empresa que fabrica 20 artículos tiene la siguiente información para cada uno de ellos:
// - Código de Artículo (4 dígitos, no correlativos).
// - Precio Unitario.
// Este primer lote no se encuentra ordenado.
// Cuenta por otro lado con un lote de registros con las ventas del año anterior. Cada registro contiene
// la siguiente información:
// - Número de Cliente (1 a 300).
// - Código de Artículo (4 dígitos no correlativos).
// - Mes (1 a 12).
// - Día (1 a 31).
// - Cantidad vendida.
// Puede haber más de un registro para el mismo artículo. El lote finaliza con un registro con número de
// cliente igual a cero.
// Se pide:
// a) Un listado con el siguiente formato:
// Código de Artículo Cantidad Total Vendida
// 999 999
// Este listado debe salir ordenado de mayor a menor por cantidad total vendida.
// b) Informar, si los hubiera, los nombres de los meses en que no hubo ventas.
// c) Informar los códigos de los artículos cuyas ventas en cantidad son mayores al promedio.
//? Structs
struct datosArt{
    int codArt;
    float precioArt;
};

struct listadoTotal{
    int articuloLis;
    float precioTotal;
};


//? Funciones
void cargarDatos(datosArt Vart[4]){
    int codArt;
    float precioArt;
    for (int i = 0; i < 4; i++){
        cout<<"Ingrese Codigo de articulo"<<endl;
        cin>>codArt;
        cout<<"Ingrese precio unitario del Articulo"<<endl;
        cin>>precioArt;
        Vart[i].codArt=codArt;
        Vart[i].precioArt=precioArt;
    }
}

void mostrarDatos(datosArt Vart[4]){
    for (int i = 0; i < 4; i++){
        cout<<"Codigo de articulo del indice "<<i<<" es : "<<Vart[i].codArt<<" su precio unitario es : "<<Vart[i].precioArt<<endl;
    }
}

void proceso (datosArt Vart[4],listadoTotal list[4]){
// - Número de Cliente.Código de Artículo.- Mes (1 a 12).- Día (1 a 31).- Cantidad vendida.
int numCliente,codArt,m,d,cantVendida;

while (numCliente!=0){
    
}

    
    
}

//? Main
int main(int argc, char const *argv[]){
    datosArt Vart[4];
    listadoTotal list[4];
    cargarDatos(Vart);
    //mostrarDatos(Vart);
    proceso(Vart,list);
    return 0;
}
