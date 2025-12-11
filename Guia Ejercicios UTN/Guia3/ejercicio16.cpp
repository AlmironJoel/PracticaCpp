/*Hacer un programa para ingresar 5 números, luego informar los 2 mayores 
valores ingresados, aclarando cual es el máximo y cuál el que le sigue.  
Ejemplo A: 10, 8, 12, 14, 3 el resultado será 14 y 12.  
Ejemplo B: 14, 8, 12, 14 ,3 el resultado será 14 y 14. 
Ejemplo C: -4, -8, -12, -20, -10 el resultado será -4 y -8 
Ejemplo D: 100, 20, 5, -15, 70, el resultado será 100 y 70.  
Ejemplo E: -100, -20, -5, 15, -70, el resultado será 15 y -5.*/
#include <iostream>
//420318251 rec//

using namespace std;

int main() {
    int n,pMayor,sMayor;
    bool bPM = true;
    bool bSM= true;
    cout<<"Ingrese 5 numeros..."<<endl;
    for (int i = 0; i < 5; i++){
        cin>>n;

        if (bPM){
            pMayor=n;
            bPM=false;
        }else if (bSM){
            if (n>pMayor){
                sMayor=pMayor;
                pMayor=n;
                bSM=false;
            }else{
                sMayor=n;
                bSM=false;
            }
        }else if (n>sMayor && n<pMayor){
            sMayor=n;
        }else if (n>pMayor){
            sMayor=pMayor;
            pMayor=n;
        }
    }
    cout<<"El primer maximo ES: "<<pMayor<<" y el segundo maximos ES: "<<sMayor;
 
    return 0;
}