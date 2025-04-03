#include <iostream>
using namespace std;
// Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar por pantalla a cuántos días, horas y minutos equivalen.
// Ejemplo A: si se ingresan 1520 minutos el programa mostrará por pantalla que equivalen a 1 día, 1 hora y 20 minutos.
// Ejemplo B: si se ingresan 480 minutos el programa mostrará por pantalla que equivalen a 0 día, 8 horas y 0 minutos
int main(int argc, char const *argv[]){
    int minutos,dias,hora,min;
    cin>>minutos;
    min=minutos;
    hora=0;
    dias=0;
    while (min>=60){
        min=min-60;
        hora++;
        if(hora>=24){
            hora=hora-24;
            dias++;
        }
    }
    cout<<"Dias :"<<dias<<" ,horas:"<<hora<<" ,minutos:"<<min<<endl;
    return 0;
}
