// Basado en los 2 ejercicios anteriores, hacer un programa para ingresar por teclado la longitud de los tres lados de un triángulo y luego listar qué tipo de triángulo es: 
// - Equilátero: si los tres lados son iguales.
// - Isósceles: si dos de los tres lados son iguales.
// - Escaleno: si los tres lados son distintos entre sí.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int A,B,C;
    cin >> A;
    cin >> B;
    cin >> C;

    if (A==B&&B==C&&C==A){
        cout<<"Equitatero";
    }else if(A!=B&&A!=C && B!=A&&B!=C && C!=A&&C!=B){
        cout<<"Escaleno";
    }else{cout<<"Isoceles";}
    
    return 0;
}
