// Hacer un programa para ingresar por teclado dos números y luego informar por pantalla con un cartel aclaratorio si el primer número es múltiplo del segundo. 

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int num,num2;
    cout<<"ingrese numero 1 y numero 2";
    cin >>num,num2;

    if (num2 != 0 && num%num2==0){
        cout<<"es multiplo";
    }else
    {
        cout<<"es multiplo";
    }
    
    
    return 0;
}
