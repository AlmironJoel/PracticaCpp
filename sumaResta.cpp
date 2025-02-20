#include <iostream>
#include <algorithm>
using namespace std;
// Hacer una función que se llame “sumaResta” que reciba dos números y que
// devuelva la suma Y la resta del primer número con el segundo.
// Nota: recordemos que una función solo puede devolver UN valor por return.
// Cómo podríamos hacer para tener ambos resultados en el main?

//Funciones
    void valorSumaResta(int n1,int n2){
        int rs=n1+n2;
        int rr= n1-n2;
        cout<< "la resta es : "<<rr << endl;
        cout<< "La suma es : "<< rs;
    }
    
//Main
int main(int argc, char const *argv[]){
    int num1,num2;
    cout<< "Ingrese el primer numero"<< endl;
    cin >> num1;
    cout<< "ingrese el Segundo numero";
    cin>> num2;

    valorSumaResta(num1,num2);
    return 0;
}//Final main
