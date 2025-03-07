#include <iostream>
using namespace std;
struct producto{
        float precio;
        int cantidad;
        int numeroArticulo;
    };

int main(int argc, char const *argv[])
{
    producto v;
    v.precio=2000;
    v.cantidad=4;
    v.numeroArticulo=6;
    
    cout<<"precio: "<<v.precio<<endl;
    cout<<"Numero de Articulo: "<<v.numeroArticulo<<endl;
    cout<<"cantidad: "<<v.precio<<endl;
    return 0;
}
