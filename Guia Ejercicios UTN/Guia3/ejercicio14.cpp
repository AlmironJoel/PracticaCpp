/*Dada una lista de 7 números enteros informar cual es el primer, el segundo, el anteúltimo y el último número impar ingresado.

        0  1   2  3  4   5  6
Ejemplo 8, 4, -5, 7, 9, 18, 5 
        no no si si si  no si
              

se informa: Primer impar: -5, Segundo impar: 7, Anteúltimo impar: 9 y Último impar: 5. */
#include <iostream>
using namespace std;

int main() {
  int n ,count=0;
  int num[7],impares[7];
        for (int i = 0; i < 7; i++){
                cout<<"ingrese numero"<<endl;
                cin>>n;
                num[i]=n;
        }
        for (int i = 0; i < 7; i++){
                if (num[i]%2!=0){
                        impares[count]=num[i];
                        count++;
                }
        }
        if (count<4){
                cout<<"Los numeros impares no superan los 4 numeros, por lo que son los siguientes : "<<endl;
                for (int i = 0; i < count; i++){
                        cout<<impares[i]<<endl;
                }
        } else{
                cout<<"Los numeros impares son los siguientes : "<<endl;
                cout<<impares[0]<<endl;
                cout<<impares[1]<<endl;
                cout<<impares[count-2]<<endl;
                cout<<impares[count-1]<<endl;
        }        
  return 0;
}