// Además, si el proyecto es marcado como Urgente, se le aumenta un 120 % más al costo del proyecto. 
// Le solicitan un programa que permita calcular el costo total de un proyecto basado en la cantidad de horas (int), el tipo de lenguaje (char) y si es urgente o no (bool)
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    int h,rh;
    bool urg;
    char tipo;

    cout<<"Introducir Horas"<<endl;
    cin>> h;
    cout<<"Introducir lenguaje (c,d,g,#)"<<endl;
    cin>>tipo;
    cout<<"Introducir urgencia(0 no urgente ,1 urgente)"<<endl;
    cin>> urg;

    switch (tipo) {
        case 'c':
            cout<<"Entro en cpp"<<endl;
            rh=h*7500;
            break;
        case '#':
        cout<<"Entro en C"<<endl;
            rh=h*6100;
            break;
        case 'p':
        cout<<"Entro en Phyton"<<endl;
            rh=h*5400;
            break;
        case 'g':
        cout<<"Entro en GO"<<endl;
            rh=h*5000;
            break;
        default:
            cout<<"introdujiste un tipo incorrecto mi rey ♥";
            break;
    }
    if(urg){
        rh=rh*2.2;
        cout<<"El resultado al ser de urgencia sale:$"<<rh<<endl;
    }else{
        cout<<"El resultado a no terner urgencia sale:$"<<rh<<endl;
    }

    return 0;
}
