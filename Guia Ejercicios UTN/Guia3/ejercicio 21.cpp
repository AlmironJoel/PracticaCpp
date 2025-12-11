/* 
Se define como divisores propios de un número entero a aquellos que son sus 
divisores excluyendo al número en sí mismo.  
Ejemplo A. Los divisores propios del 4 son: 1 y 2.  
Ejemplo B. Los divisores propios del 12 son: 1, 2, 3, 4 y 6. 
Se define a un número como perfecto cuando la suma de todos sus divisores 
propios coincide con el número en sí mismo.  
Ejemplo A: 6 es número perfecto pues 1+2+3=6  
Ejemplo B: 28 es número perfecto pues 1+2+4+7+14=28  
Ejemplo C: 12 no es número perfecto pues 1+2+3+4+6=16  
Hacer un programa para ingresar un número y luego informar con un cartel 
aclaratorio si el mismo es un número perfecto o no es número perfecto
*/
#include <iostream>
using namespace std;

int main() {
    int n,count=0;
     cout<<"ingrese el numero a verificar"<<endl;
     cin>>n;
        for (int i = 1; i < n ; i++){
             if (n%i==0){
                     count=count+i;
                    }
                }
      if (count==n){            
        cout<<"Numero Perfecto! El numero que ingresaste es : "<<n<<" y el la sumaroria de los divisores da como resultado : "<<count<<endl;
        } else{
            cout<<"No es es numero perfecto por que el numero ingresado es : "<<n<<" y la sumatoria da como resultado : "<<count<<endl;
        }
        
    return 0;
}