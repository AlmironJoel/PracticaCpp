#include <iostream>
using namespace std;
// Hacer un programa para ingresar por teclado un número y luego informar por pantalla con un cartel aclaratorio si el mismo es par o impar.

int main(int argc, char const *argv[]){
    int num;
    cout<<"ingrese numero";
    cin >>num;
    if (num%2==0){
        cout<<"es par";
    }else{
        cout<<"es impar";
    }
    
    
    return 0;
}
