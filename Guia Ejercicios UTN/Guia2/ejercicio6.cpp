// Hacer un programa para ingresar por teclado tres números y luego determinar e informar con una leyenda aclaratoria si los tres son iguales entre sí, caso contrario no emitir nada.
// Tener en cuenta:  Si A es igual a B y B es igual a C, entonces A y C son iguales.

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    int n1,n2,n3;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    
    if (n1==n2&&n2==n3&&n3==n1){
        cout<<"Los 3 son iguales";
    } else {cout<<"No son iguales"; }
    
    return 0;
}
