// Hacer un programa para ingresar cinco números y listar cuantos de esos cinco números son positivos, cuantos son negativos y cuantos son iguales a 0.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int n,countPos=0,countNeg=0,countCero=0;

    for (int i = 0; i < 5; i++) {
        cout << "ingrese numero"<<endl;
        cin >> n;
         if(n==0){
            countCero++;
         }
         if(n>0){
            countPos++;
         }
         if (n<0){
            countNeg++;
        }
    }    

cout <<"positivos: "<<countPos<<endl;
cout <<"negativos: "<<countNeg<<endl;
cout <<"Ceros: "<<countCero<<endl;     
    
    return 0;
}
