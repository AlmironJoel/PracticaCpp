// Un comercio vende tres marcas de alfajores distintas A, B y C. Hacer un programa para ingresar por teclado la cantidad de alfajores vendidos de cada una de las tres marcas y luego se informe el porcentaje de ventas para cada una de ellas.
// Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el programa calculará e informará A: 50%, B: 12,50% y C: 37,50%.
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    float a,b,c,rA,rB,rC;
    cout<<"Ingrese la cantidad de alfajores A"<<endl;
    cin >> a;
    cout<<"Ingrese la cantidad de alfajores B"<<endl;
    cin >> b;
    cout<<"Ingrese la cantidad de alfajores C"<<endl;
    cin >> c;
    const int total=a+b+c;
    rA=a*100/total;
    rB=b*100/total;
    rC=c*100/total;
    
    cout<<"Resultado A: %"<<rA<<" Resultado B: %"<<rB<<" Resultado C:%"<<rC<<endl; 
    return 0;
}