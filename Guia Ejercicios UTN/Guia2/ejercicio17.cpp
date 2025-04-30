// Hacer un programa para ingresar por teclado cuatro números. Si los valores que se ingresaran están ordenados en forma creciente, emitir el mensaje “Conjunto Ordenado”, caso contrario emitir el mensaje: “Conjunto Desordenado”. 
// Ejemplo A: si los números que se ingresan son 8, 10, 12 y 14, entonces están ordenados. 
// Ejemplo B: si los números que se ingresan son 8, 12, 12 y 14, entonces están ordenados. 
// Ejemplo C: si los números que se ingresan son 10, 8, 12 y 14, entonces están desordenados.

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
    int n1,n2,n3,n4;
    cout <<"ingrese n1"<<endl;
    cin>>n1;
    cin>>n2;
    cin>>n3;
    cin>>n4;
    if (n1<n2&&n2<n3&&n3<n4&&n4>n3){
        cout <<"ordenado"<<endl;
    }else{
        cout <<"DESORDENADO"<<endl;
    }
    

    return 0;
}
