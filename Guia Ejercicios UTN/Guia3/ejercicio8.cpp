/*
Hacer un programa para ingresar una lista de 10 números, luego informar el 
porcentaje de positivos, negativos, y  ceros.
*/

#include <iostream>
#include <cstdlib> // Para system()

using namespace std;
// funciones
void verificarNum(int numeros,int n,int total,int pos,int neg,int cero,int rPos,int rNeg,int rCero);
int porcentaje(int total,int conteo);

int main(int argc, char const *argv[]){
    int n,numeros;
    int total=0,pos=0,neg=0,cero=0;
    int rPos=0,rNeg=0,rCero=0;
    cout<<"ingrese la cantidad de numero que vamos a evaluar"<<endl;
    cin>>numeros;
    
    verificarNum(numeros,n,total,pos,neg,cero,rPos,rNeg,rCero);

}


void verificarNum(int numeros,int n,int total,int pos,int neg,int cero,int rPos,int rNeg,int rCero){
    
    for(int i=0;i<numeros;i++){
        cout<<"ingrese el numero"<<endl;
        cin>>n;
        total++;
        if(n==0){
            cout<<"Numero 0"<<endl;
            cero++;
        }else if(n>0){
            cout<<"Numero positivo"<<endl;
            pos++;
        }else{
            cout<<"ingreso = "<< n <<endl;
            neg++;
        }
    }
    rPos=porcentaje(total,pos);
    rNeg=porcentaje(total,neg);
    rCero=porcentaje(total,cero);

    cout<<"Positivos porcentual = "<<rPos<<" positivos"<<endl;
    cout<<"Positivos porcentual = "<<rNeg<<" negativos"<<endl;
    cout<<"Positivos porcentual = "<<rCero<<" cero"<<endl;
}

int porcentaje(int total,int conteo){
    int r = conteo*100/total;
    return r;
}