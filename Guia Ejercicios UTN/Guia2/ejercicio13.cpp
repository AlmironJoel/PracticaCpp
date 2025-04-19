// Hacer un programa para ingresar tres números distintos y listarlos ordenados de menor a mayor. 
// Sugerimos probar CADA UNA de las siguientes 6 combinaciones.
// Si N1=8, N2=6, N3=10 ó  N1=8, N2=10, N3=6. Se muestra: 6, 8, 10.
// Si N1=6, N2=8, N3=10 ó  N1=10, N2=8, N3=6. Se muestra: 6, 8, 10.
// Si N1=6, N2=10, N3=8 ó  N1=10, N2=6, N3=8. Se muestra: 6, 8, 10.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int n1,n2,n3,aux;
    cout<<"ingrese n1"<<endl;
    cin>>n1;
    cout<<"ingrese n2"<<endl;
    cin>>n2;
    cout<<"ingrese n3"<<endl;
    cin>>n3;
     if(n1 == n2 || n1 == n3 || n2 == n3) {
        cout << "Los numeros deben ser distintos!" << endl;
        return 1;
    }
    
    cout << "Numeros ordenados de menor a mayor: ";
    
    // Encontramos el menor
    if(n1 < n2 && n1 < n3) {
        cout << n1 << ", ";
        // Comparar n2 y n3 para ver cuál es el siguiente
        if(n2 < n3) {
            cout << n2 << ", " << n3;
        } else {
            cout << n3 << ", " << n2;
        }
    } 
    else if(n2 < n1 && n2 < n3) {
        cout << n2 << ", ";
        // Comparar n1 y n3
        if(n1 < n3) {
            cout << n1 << ", " << n3;
        } else {
            cout << n3 << ", " << n1;
        }
    }
    else { // n3 es el menor
        cout << n3 << ", ";
        // Comparar n1 y n2
        if(n1 < n2) {
            cout << n1 << ", " << n2;
        } else {
            cout << n2 << ", " << n1;
        }
    }
    
    cout<<"n1 : "<<n1<<"n2 : "<<n2<<"n3: "<<n3<<endl;
    
    return 0;
}
