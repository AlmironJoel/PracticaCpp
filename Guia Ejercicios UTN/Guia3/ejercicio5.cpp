// Hacer un programa para que el usuario ingrese dos números y luego el programa muestre por pantalla los números entre el menor y el mayor de ambos. 
// Ejemplo, si el usuario ingresa 3 y 15, se mostrarán los números entre el 3 y el 15 y si el usuario ingresa 25 y 8, se mostrarán los números entre el 8 y el 25.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int n1,n2,min,max;

    cout<<"ingrese numero"<<endl;
    cin>>n1;
    cin>>n2;

    if (n1>n2){
        max=n1;
        min=n2;
    }else{
        max=n2;
        min=n1;
    }
    for (int i = min; i <= max; i++){
        cout<<i<<endl;
    }
    
    return 0;
}
