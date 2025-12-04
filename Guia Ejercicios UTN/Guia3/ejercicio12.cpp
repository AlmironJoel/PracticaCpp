/*
Hacer un programa para ingresar una lista de 10 números e informar el máximo 
de los negativos y el mínimo de los positivos.  
Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24. Máximo Negativo -3. Mínimo Positivo 2. */
#include <iostream>
using namespace std;
int main() {
    int n ,maxNeg=0,minPos=0;
    bool banNeg=false,banPos=false;
    for (int i = 0; i < 5; i++){
        cout<<"Ronda : "<<i+1<<"ingrese el numero"<<endl;
        cin>>n;
        if(n<0){
            if (!banNeg){
                maxNeg=n;
                banNeg=true;
            }else if (n>maxNeg){
                maxNeg=n;
            }        
        }else if (!banPos){
                minPos=n;
                banPos=true;
            }else if (n<minPos){
                minPos=n;
            }
    }
    
    cout<<"MINIMO POSITIVO : "<<minPos<<" , maximo negativo : "<<maxNeg<<"/n";
    return 0;
}