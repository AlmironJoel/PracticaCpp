// Hacer una función llamada “producto” que reciba dos números enteros y que
// devuelva el producto de ambos. Luego hacer un programa que pida el precio
// de un artículo y la cantidad vendida y muestre por pantalla el monto total a
// pagar. Usar la función.
#include <iostream>
using namespace std;

//funciones
int produc (int n1,int n2){
    int r;
    r=n1*n2;
    return r;
}

//Main
int main(int argc, char const *argv[]){
int r=0;
int n1,n2;

 cout << "ingresa el primer numero";
 cin >> n1;
 cout << "ingresa el segundo numero";
 cin >> n2;
    
 r=produc(n1,n2);

 cout<<"Resultado : "<< r;
    return 0;
} //Final Main
