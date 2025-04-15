// Hacer un programa para ingresar por teclado un número y luego emitir por pantalla un cartel aclaratorio indicando si el mismo es positivo, negativo o cero.
// Importante: Verifique que el programa emita UN SOLO CARTEL.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    cout<<"ingrese un numero"<<endl;
    int num;
    cin>>num;
    if (num==0){
        cout<<"Cero"<<endl;
    }else{
        if (num>0){
            cout<<"positivo"<<endl;
        }else{
            cout<<"negativo"<<endl;
        }
        
    }
    
    return 0;
}
