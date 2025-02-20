#include <iostream>
using namespace std;

//  Hacer una función de tipo void (porque no va a devolver nada) llamada
// “positivoNegativoCero” que reciba un número por valor y una variable por
// referencia. Que analice el número y escriba variable recibida por referencia
// con:
// a. 1 si el número es positivo.
// b. -1 si el número es negativo.
// c. 0 si el número es cero.

// maxiprograma.com
// Hacer un programa main que permita ingresar 100 números y emitir por
// // // pantalla cuántos son positivos, cuántos negativos y cuántos cero.KC

//Funcion
void posNevCero (int Vector[10]){
    int countP=0,countN=0,countC=0;
    for (int i = 0; i < 10; i++)
    {
        if (Vector[i]==0) {
            countC++;
        }
        if (Vector[i]<0){
            countN++;
        } else if (Vector[i]>0){
            countP++;
        }
    }
    
    cout<<"contadores positivos: "<<countP<<ends; ;
    cout<<"contadores negativos: "<< countN<<ends ;
    cout<<"contadores de Ceros: "<< countC<<endl ;
}

//Main
int main(int argc, char const *argv[]){
    int Vector [10];
    cout<<"ingrese el primer numero en la posicion 0";
    int numero;
    cin >> numero;
    Vector[0]=numero;

    for (int i = 1; i <10; i++)
    {
        cout<<"ingrese el siguiente numero en la posicion : "<< i<<endl;
        cin>>numero;
        Vector[i]=numero;
    }
    
    posNevCero(Vector);
    return 0;
}


