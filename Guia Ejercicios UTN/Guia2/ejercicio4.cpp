// Hacer un programa para ingresar por teclado dos números y luego informar por pantalla la diferencia entre ambos. 
// Ejemplo A: Si se ingresan 3 y 8 se emite 5. Si se ingresan 8 y 3 se emite 5. 
//Ejemplo B: Si se ingresan -3 y 9 se emite 12. Si se ingresan -12 y -1 se emite 11.
// Ejemplo C: Si se ingresan -3 y -9 se emite 6. Si se ingresan -12 y -9 se emite 3.
// Importante: Verifique que el programa emite SIEMPRE UN VALOR POSITIVO porque la diferencia absoluta siempre es un valor positivo.
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int num,num2,r;
    cout<<"ingrese numero 1 y numero 2";
    cin >>num;
    cin>>num2;
    if (num>=0&&num2>=0){
        if (num>num2){
            r=num-num2;
            cout<<"resultado: "<<r<<endl;
        }else{
            r=num2-num;
            cout<<"resultado: "<<r<<endl;
        }
    }else{
        if (num>num2){
            r=num-num2;
            cout<<"resultado: "<<r<<endl;
        }else{
            r=num2-num;
            cout<<"resultado: "<<r<<endl;
        }
    }
    return 0;
}
