//*Hacer un programa para ingresar una lista de 10 números, luego informar
//cuántos son positivos, cuántos son negativos, y cuántos iguales a cero. 
//Para resolver este ejercicio sugerimos resolver antes el TP2 EJ 11. */

#include <iostream>

using namespace std;
//funciones
int verificarNum(int n);

int main(int argc, char const *argv[]){
    int n , vueltas;
    cout<<"Cuantos numero quieres ingresa?"<<endl;
    cin>>vueltas;
    for(int i=0;i<vueltas;i++){
        cin>>n;
        verificarNum(n);
    }
    return 0;
}

int verificarNum(int n){
    if(n==0){
        cout<<"Numero 0"<<endl;
    }else if(n>0){
        cout<<"Numero positivo"<<endl;
    }else{
        cout<<"Numero Negativo"<<endl;
    }
}