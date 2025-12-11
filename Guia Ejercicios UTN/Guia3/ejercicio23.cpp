/*
Dada una lista de 10 números enteros informar la cantidad de duplas de 
números impares que se hayan ingresado consecutivamente.  
Ejemplo A: 12, 3, 5, 7, 6, 9, 13, 10, 7, -5.  
En esta lista las duplas son: 3:5, 5:7, 9:13, 7:-5 por lo tanto se informará que hay 
4 duplas de números impares ingresados consecutivamente. 
Ejemplo B: 3, 5, 7, 10, 3, 5, 7, 10, 3, 5. 
En esta lista las duplas son: 3:5, 5:7, 3:5, 5:7, 3:5 por lo tanto se informará que 
hay 5 duplas de números impares ingresados consecutivamente. 
Aclaración: Sólo hay que listar la cantidad de duplas de impares. No hay que 
mostrar cómo están compuestas las duplas de números.
*/
#include <iostream>
using namespace std;
//Declaracion de funciones
bool verificarNumero (int n);

int main() {
    int n;//n1,n2;
    bool num=false;
    int contadorDuplas=0,contador=0;
    
    for (int i = 0; i < 10; i++){
        cout<<"ingrese numero"<<endl;
        cin>>n;
        num=verificarNumero(n);
        if ((num&&contador==0)||(num&&contador==1)){
            cout<<"numero impar, suma una dupla: "<<n<<" esel numero impar"<<endl;
            contador++;
            cout<<"contador esta en : "<<contador<<endl;
            system("pause");
        }else if(!num&&contador==1){
            cout<<"numero es par, pero el contador esta en 1, baja un punto al contador..."<<endl;
            contador--;
        }       

        if (contador==2){
              contadorDuplas++;
              contador--;
              cout<<"Se sumo una dupla, total al momento : "<<contadorDuplas<<endl;
        }
    }    
    cout<<"contador : "<<contadorDuplas<<endl;
    return 0;
}

//Funciones
bool verificarNumero (int n){
    if (n%2 !=0){
        return true;
    }else{
        return false;
    }
};