// Hacer un programa para ingresar un N valor que indica la cantidad de números que componen una lista y luego solicitar se ingresen esos N números. Se pide informar cuantos son positivos
// Ejemplo A: Se ingresa como N el valor 5, y luego se ingresa: 10, -3, 2, 5, 4. Se listará:  Cantidad de Positivos: 4
// Ejemplo B: Se ingresa como N el valor 6, y luego se ingresa: -10, -3, -2, 0, -5, -4. Se listará: Cantidad de Positivos: 0

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int n,num,count=0;
    cout<<"ingrese la cantida de numero para la lista "<<endl;
    cin>>n;
    for (int i = 0; i < n; i++){
        cout<<"ingrese numero";
        cin>>num;
        if (num>0){
            count++;
        }
    }

    cout<<"cantidad de numeros positivos:"<<count<<endl;

    return 0;
}
