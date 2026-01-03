/*
Dada una lista de 7 números enteros todos distintos entre sí determinar e 
informar con un cartel aclaratorio si los números primos ingresados en la 
misma están ordenados de menor a mayor. Los números primos pueden no ser 
consecutivos, pero sí estar ordenados. 

Ejemplo A: 4, 5, 7, 12, 13, 19, 20. Se emite un cartel que diga “Ordenados” ya que los números primos están ordenados: 5, 7, 13, 19. 

Ejemplo B: 4, 10, 3, 5, 11, 7, 14. Se emite un cartel que diga “Desordenados” ya que los números primos no están ordenados: 3, 5, 11, 7.
*/
#include <iostream>
using namespace std;
//Declaracion funciones
bool esPrimo(int num);

int main() {
    int n;
    int numAnterior;
    bool orden=true;
    bool b=false;
    for (int i = 0; i < 7; i++){
        cout<<"ingrese numero:";
        cin>>n;
        if (esPrimo(n)){
            if (!b){
              b=true;
              numAnterior=n;
            }else if (n>numAnterior){
                numAnterior=n;
            }else{
                orden=false;
            }            
        }
        
    }

    if (orden){
        cout<<"ORDENADOS"<<endl;
    }else{
        cout<<"DESORDENADOS"<<endl;
    }
    
    
    return 0;
}

//funciones
bool esPrimo(int num){
    int contador=0;
    for (int i = 1; i <= num; i++){
        if (num%i==0){
            contador++;
        }
    }
    if (contador==2){
        return true;
    }else{
        return false;
    }
}