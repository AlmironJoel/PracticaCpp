/*Hacer un programa para ingresar una lista de 10 números enteros, luego 
informar el máximo y la posición del máximo en la lista. En caso de “empates” 
considerar la primera aparición. 
Ejemplo A: 5, -10, 20, 8, 25, 13, 35, -8, -5, 20. Listará Máximo 35 Posición 7. 
Ejemplo B: 5, -10, 2, 8, 25, 13, 55, -8, 55, 9. Listará Máximo 55 Posición 7. 
Ejemplo C: -15, -10, -20, -8, -25, -13, -55, -6, -55, -20. Listará Máximo -6 Posición 8. 
El tercer ejemplo demuestra que NO SIEMPRE en una lista de números el 
máximo es un positivo. 
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int n,max=0,orden=0;
    bool ban=false;
    for (int i = 0; i < 10; i++){
        cout<<"Ingresa el numero"<<endl;
        cin>>n;
            if (!ban){
                max=n;
                orden=i+1;
                ban=true;
            }else if (n>max) {
                max=n;
                orden=i+1;
                cout<<"nuevo numero maximo"<<endl;
            }  else{
                cout<<"no fue numero maximo"<<endl;
            }   
        }
    cout<<"Numero maximo en la Lista fue : "<<n<<" con el Orden : "<<orden<<" ."<<endl;
    
    return 0;
}
