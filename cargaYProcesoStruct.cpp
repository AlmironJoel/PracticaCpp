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
void cargarDatos(datosArt Vart[4],listadoTotal list[4]){
    int codArt;
    float precioArt;
    for (int i = 0; i < 4; i++){
        //Datos por el usuario
        cout<<"Ingrese Codigo de articulo"<<endl;
        cin>>codArt;
        cout<<"Ingrese precio unitario del Articulo"<<endl;
        cin>>precioArt;
        Vart[i].codArt=codArt;
        Vart[i].precioArt=precioArt;

        //setear datos
        list[i].articuloLis=codArt;
        list[i].precioTotal=0;
    }
    cout<<"DATOS CARGADOS Y STRUCT SETEADO"<<endl;
}

void ponerEnFalse(bool Vmes[12]){
    for (int i = 0; i < 12; i++){
        Vmes[i]=false;
    }
    
}

void mostrarDatos(datosArt Vart[4],listadoTotal list[4]){
    for (int i = 0; i < 4; i++){
        cout<<"Codigo de articulo del indice "<<i<<" es : "<<Vart[i].codArt<<" su precio unitario es : "<<Vart[i].precioArt<<endl;
        // cout<<"El articulo del indice "<<i<<" es : "<<list[i].articuloLis<<" su precio acumulado es : "<<list[i].precioTotal<<endl;
    }
}

void ordenar (listadoTotal list[4]){
    for (int i = 0; i < 4; i++){
        
        for (int j = 0; j < 3; j++){
            if (list[j].articuloLis<list[j+1].articuloLis){
                int aux;

                aux=list[j+1].articuloLis;
                list[j+1].articuloLis=list[j].articuloLis;
                list[j].articuloLis=aux;

                aux=list[j+1].precioTotal;
                list[j+1].precioTotal=list[j].precioTotal;
                list[j].precioTotal=aux;
            }
        }
        
    }   
    
    for (int i = 0; i < 4; i++){
        cout<<"Listado ORDENADO!>>ARTICULO: "<<list[i].articuloLis<<" /Precio TOTAL: "<<list[i].precioTotal<<endl;
    }
    
}

void noVentas(bool Vmes[12]){
    string nombresMeses[12] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", 
        "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    for (int i = 0; i < 12; i++){
        if (Vmes[i]==false)  {
            cout << "Mes donde no hubo Venta: "<<nombresMeses[i] << endl;
            }//if
        }//forB
}

float calcularPromedio(int cantidades[4]) {
    int suma = 0;
    for (int i = 0; i < 4; i++) {
        suma += cantidades[i];
    }
    return (float)suma / 4; // Promedio
}   


void proceso (datosArt Vart[4],listadoTotal list[4],bool Vmes[12]){
    int cantidadesVendidas[4] = {0};//c
// - Número de Cliente.Código de Artículo.- Mes (1 a 12).- Día (1 a 31).- Cantidad vendida.
cout<<"cargar numero de cliente"<<endl;
int numCliente;
cin>>numCliente;
cout<<"cargar codigo de articulo"<<endl;
int codArt;
cin>>codArt;
cout<<"cargar numero del Mes"<<endl;
int m;
cin>>m;
cout<<"cargar numero del DIA"<<endl;
int d;
cin>>d;
cout<<"cargar Cantida Vendida"<<endl;
int cantVendida;
cin>> cantVendida;

while (numCliente!=0){
    //A
    for (int i = 0; i < 4; i++){
        if (codArt==list[i].articuloLis){
            list[i].precioTotal=list[i].precioTotal+(cantVendida*Vart[i].precioArt);
            Vmes[m-1]=true;
            cantidadesVendidas[i] += cantVendida; // Acumular cantidad vendida
        }
    }
    cout<<"cargar numero de cliente"<<endl;
    cin>>numCliente;
    cout<<"cargar codigo de articulo"<<endl;
    cin>>codArt;
    cout<<"cargar numero del Mes"<<endl;
    cin>>m;
    cout<<"cargar numero del DIA"<<endl;
    cin>>d;
    cout<<"cargar Cantida Vendida"<<endl;
    cin>> cantVendida;
}
cout<<"SALIO DEL CICLO WHILE"<<endl; 
ordenar(list);
//todo b) Informar, si los hubiera, los nombres de los meses en que no hubo ventas.
noVentas(Vmes);
//todo c) Informar los códigos de los artículos cuyas ventas en cantidad son mayores al promedio.
float promedio = calcularPromedio(cantidadesVendidas);
    cout << "El promedio de cantidades vendidas es: " << promedio << endl;
    
for (int i = 0; i < 4; i++) {
    if (cantidadesVendidas[i] > promedio) {
        cout << "El articulo: " << list[i].articuloLis<< " tiene ventas mayores al promedio (" << cantidadesVendidas[i] << ")" << endl;
    }
}
 
}//while

//? Main
int main(int argc, char const *argv[]){
    datosArt Vart[4];
    listadoTotal list[4];
    bool Vmes[12];
    ponerEnFalse(Vmes);
    cargarDatos(Vart,list);
    proceso(Vart,list,Vmes);
    mostrarDatos(Vart,list);
    return 0;
}
