// La amplitud térmica es la diferencia entre la temperatura máxima y la temperatura mínima en una zona y tiempo determinado. Dada la temperatura máxima y la temperatura mínima de San Fernando de ayer, calcular y mostrar la amplitud térmica.
// NOTA: El usuario ingresará como temperatura máxima un valor mayor o igual al de la temperatura mínima.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    float tempMax,tempMin;
    cout<<"ingrese la temperatura Max"<<endl;
    cin>>tempMax;
    cout<<"ingrese la temperatura Min"<<endl;
    cin>>tempMin;
    float resultado;
    if (tempMax==tempMin) {
        cout<<"Misma temperatura";
    }else{
        resultado=tempMax-tempMin;
        cout<<"temperatura de deferencia"<<resultado<<endl;
    }
    
    
    return 0;
}
