/*Hacer un programa para ingresar una lista de 10 números, luego informar el 
máximo y el mínimo. 
Ejemplo A: 10, 20, -5, 30,-15, 5, 42, 0, 22, -13. Se listará Máximo 42 Mínimo -15. 
Ejemplo B: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13. Se listará Máximo 42 Mínimo 5. 
Ejemplo C: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13. Se listará Máximo -5 Mínimo -42. 
Observe que los tres ejemplos dejan en claro que la suposición de que el 
máximo “seguramente” es un positivo y el mínimo “seguramente” es un 
negativo, queda totalmente descartada. */

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
    int n ,max=0,min=0;
    bool banMax=false,banMin=false;
    for (int i = 0; i < 3; i++){
        cout<<"Ingresa el numero"<<endl;
        cin>>n;
            if (!banMax){
                max=n;
                banMax=true;
            }else{
                if (!banMin) {
                    if (n>max){
                        min=max;
                        max=n;
                        banMin=true;
                    }else{
                        min=n;
                        banMin=true;
                    }
                } else {
                    if (n>max) {
                        max=n;
                    }else if (n<min){
                        min=n;
                    }                    
                }
            }
            }
                cout<<"maximo : "<<max<< " y el minimo : "<<min<<endl;
    return 0;
}
