#include <iostream>
using namespace std;

// Función para verificar si un número es par
bool esPar(int n) {
    return n % 2 == 0;
}

// Función para verificar si un número es primo
bool esPrimo(int num) {
    if (num <= 1) return false; // 0 y 1 no son primos
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Main
int main() {
    int n;
    int maxPar = -1; // Inicializado a -1 para manejar el caso de que no se ingresen números pares
    int countImp = 0;
    int minPrimo = -1; // Inicializado a -1 para manejar el caso de que no se ingresen números primos

    cout << "Ingresa una lista de números (0 para terminar):" << endl;
    cin >> n;

    while (n != 0) {
        // a. El mayor de los números pares
        if (esPar(n)) {
            if (maxPar == -1 || n > maxPar) {
                maxPar = n;
            }
        } else {
            // b. La cantidad de números impares
            countImp++;
        }

        // c. El menor de los números primos
        if (esPrimo(n)) {
            if (minPrimo == -1 || n < minPrimo) {
                minPrimo = n;
            }
        }

        cout << "Ingresa otro número (0 para terminar): ";
        cin >> n;
    }

    // Mostrar resultados
    if (maxPar != -1) {
        cout << "El mayor de los números pares es: " << maxPar << endl;
    } else {
        cout << "No se ingresaron números pares." << endl;
    }

    cout << "La cantidad de números impares es: " << countImp << endl;

    if (minPrimo != -1) {
        cout << "El menor de los números primos es: " << minPrimo << endl;
    } else {
        cout << "No se ingresaron números primos." << endl;
    }

    return 0;
}
// #include <iostream>
// using namespace std;

// // Hacer un programa que permita ingresar una lista de números que corta
// // cuando se ingresa un cero. A partir de dichos datos informar:
// // a. El mayor de los números pares.
// // b. La cantidad de números impares.
// // c. El menor de los números primos.
// // Hacer uso de las funciones anteriormente desarrolladas.

// //Funciones
// // int primo (int num){
// //     int count=0;
// //     int countP=0;

// //     for (int i = 1; i < num; i++){
// //         if (num%2==0){
// //             count++;
// //         }
// //     }

// //     if (count==2){
// //         countP++;
// //     }

// //     return countP;
// // }

// // void proceso (int num, int maxPar,int countImp,int countPrimo){
// //     bool BP=false;

// //     if (num%2==0){
// //         if (BP==false){
// //             maxPar=num;
// //             BP=true;
// //         } else if (num>maxPar) {
// //             maxPar=num;
// //         }
// //     }else{
// //         countImp++;
// //     }

// //     countPrimo = primo(num);

// // }
// //---
// bool par (int n){
//     if(n%2==0){
//         cout<<"Numero : "<<n<<endl;
//         return true;

//     }

// }

// bool Fprimo (int num){
//     int count=0;
//     for (int i = 1; i < num; i++){
//         if (num%2==0){
//             count++;
//         }
//     }

//     if (count==2){
//         return 1;
//     }return 0;
// }

// //Main
// int main(int argc, char const *argv[])
// {
//     cout<< "Ingresa el numero";
//     int n;
//     cin>>n;

//     int maxPar=0,countImp=0,minPrimo=0;
//     bool ban=false, banPrimo=false;
    
//     while (n!=0){
//         bool BP= par(n);
//         cout << "BP : "<<BP;
//         if (BP==true) {
//             if (ban==false){
//                 maxPar=n;
//                 ban=true;
//             } else if (n>maxPar) {
//                 maxPar=n;
//             }
//         } else {
//             countImp++;
//         }

//         bool primo= Fprimo(n);

//         if (primo==true){
//             if (banPrimo==false) {
//                 minPrimo=n;
//                 banPrimo=true;
//             } else{
//                 if (n<minPrimo) {
//                     minPrimo=n;
//                 }                
//             }
            
//         }
        
        
//         cout<<"ingresa otro numero";
//         cin>>n;
//     }

//     cout<<"el maximo par es : "<<maxPar<<endl;
//     cout<<"el contador de impares dio un total de : "<<countImp<<endl;
//     cout << "El menor Primo fue : "<<minPrimo;

//     return 0;
// }//FinMain
