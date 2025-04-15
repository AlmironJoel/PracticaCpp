// El Laboratorio V&V hace frascos de píldoras para aprender a programar. Cada frasco contiene 75 píldoras y cada píldora contiene 45 mg de Betamol, 2 grs de Micilina y 7 mg de Ácido Sinítico.
// Nos solicitan un programa donde se ingrese la cantidad de frascos de un pedido y muestre la cantidad de miligramos de Betamol, Micilina y de Ácido Sinítico que son necesarios para elaborarlos.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int pildoras=75,betamol=45,micilina=2,acidoSinitico=7;
    int frascos;
    cout<<"ingrese la cantidad de frascos que se van a elaborar."<<endl;
    cin>>frascos;
    float rPildoras=pildoras*frascos;
    float rBetamol=betamol*rPildoras,
          rMicilina=(micilina*rPildoras)*1000,
          rAcidoSinitico=acidoSinitico*rPildoras;

    cout<<"cantidad necesaria para elaborar es:"<<rBetamol<<" mg, "<<rMicilina<<"gr , "<<rAcidoSinitico<<"mg."<<endl;


    return 0;
}
