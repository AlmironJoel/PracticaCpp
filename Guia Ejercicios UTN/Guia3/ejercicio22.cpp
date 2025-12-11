/*
Dada una lista de 7 números enteros informar el primer número par ingresado y 
su ubicación en la lista y el último de los números primos y su ubicación en la 
lista. Ejemplo A: 7, 4, 5, 6, 9, 13, 10 se informa:  
Primer númer/o par: 4 ubicación 2. Último primo: 13 ubicación 6.  
Ejemplo B: 9, 5, 21, 9, 13, 15, 6 se informa:  
Primer número par: 6 ubicación 7. Último primo: 13 ubicación 5.
*/
#include <iostream>
using namespace std;
//funciones
bool esPar(int n);
bool primo(int n);

int main() {
    int n,numPar,numPrimo,indicePar,indicePrimo;
    bool banderaPar=false;
    bool banderaPrimo=false;

    for (int i = 0; i < 7; i++){
        cout<<"ingrese numero a evaluar"<<endl;
        cin>>n;
        banderaPrimo=primo(n);
        if (banderaPrimo){
            numPrimo=n;
            indicePrimo=i;
        }
            
        if(banderaPar==false){
            banderaPar= esPar(n);//true
            numPar=n;
            indicePar=i;
        }
    }    
    cout<<"Primer numero Par es : "<<numPar<<" su ubicacion es : "<<indicePar+1<<endl;
    cout<<"Ultimo numero Primo es : "<<numPrimo<<" su ubicacion es : "<<indicePrimo+1<<endl;
    return 0;
}

//funciones
bool esPar(int n){
        if (n%2==0){
          return true;
        }else{return false;}
}

bool primo(int n){
    int count=0;
    for (int i = 1; i <=n; i++){
        if (n%i==0){
            count++;   
        }
    }    
    if (count==2){
        return true;
    }else{
        return false;
    }
}