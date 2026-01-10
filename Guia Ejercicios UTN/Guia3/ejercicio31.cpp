/*
Hacer un programa para ingresar 10 números, luego informar los 2 mayores 
valores ingresados, aclarando cual es el máximo y cuál es el segundo máximo 
descartando los números repetidos. 
Ejemplo A: 10, 8,12, 78 ,55, 20, 12, 40, 31, 28 el resultado será 78 y 55. 
Ejemplo B: -20, - 25, -3, -8, -50, -45, -20, -22, -15, -11 el resultado será -3 y -8. 
Ejemplo C: 20, 20, 12, 9, 14, 14, 8, 8, 10, 3 el resultado será 20 y 14. 
En el ejemplo C el valor 20 aparece dos veces, pero sólo se considera una vez.
*/
#include <iostream>
using namespace std;

int main() {
    int n, max1,max2;
    bool ban1=false,ban2=false;
    for (int i = 0; i < 10; i++){
        cin>>n;
        if (!ban1){
            max1=n;
            ban1=true;
        }else if (!ban2&&n!=max1){
            max2=n;
            ban2=true;
        }else if ((n>max2&&n>max2)&&(n!=max1&&n!=max2)){//max1 y max2 ocupados.
            max2=max1;
            max1=n;
        }else if (n>max2&&(n!=max1&&n!=max2)){
            max2=n;
        }
    }
    cout<<"max 1 : "<<max1<<", max2: "<<max2<<endl;
    return 0;
}