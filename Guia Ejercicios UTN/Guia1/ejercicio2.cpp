//Hacer un programa que solicite por teclado que se ingresen dos números y luego guardarlos en dos variables distintas. A continuación se deben intercambiar mutuamente los valores en ambas variables y mostrarlos por pantalla.
//Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que la variables usadas son A y B, entonces A=3 y B=8, pero luego debe quedar A=8 y B=3.
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int n1,n2,aux;
    cout<<"ingrese el primer numero"<<endl;
    cin>>n1;
    cout<<"ingrese el segundo numero"<<endl;
    cin>>n2;
    cout<<"numeros originales: N1 contiene = "<<n1<<" N2 contiene = "<<n2<<endl;
    aux=n2;
    n2=n1;
    n1=aux;
    cout<<"intercambio realizado! N1 ahora vale = "<<n1<<" y N2 vale= "<<n2<<endl;
    
    return 0;
}

