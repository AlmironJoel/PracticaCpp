#include <iostream>
#include <algorithm> // Para std::fill
using namespace std;

int main() {
    int num;
    int Vector[20];
    fill(Vector, Vector + 20, 9); // Inicializar el vector con 9
    int i = 0;

    // Solicitar números binarios (0 o 1) al usuario
    while (i < 5) { // Limitar a 5 iteraciones
        cout << "Inserte un numero binario (0 o 1): ";
        cin >> num;

        // Verificar si el número es binario (0 o 1)
        if (num == 0 || num == 1) {
            Vector[i] = num; // Almacenar el número en el vector
            i++; // Incrementar el índice
        } else {
            cout << "Error: Solo se permiten numeros binarios (0 o 1). Intente de nuevo." << endl;
        }
    }

    // Convertir el número binario a decimal
    int decimal = 0;
    for (int j = 0; j < 5; j++) {
        if (Vector[j] == 1) {
            decimal += (1 << j); // Calcular 2^j usando desplazamiento de bits
        }
    }

    // Imprimir el contenido del vector
    cout << "Los numeros binarios almacenados en el vector son: " << endl;
    for (int j = 0; j < 5; j++) {
        cout << "Vector[" << j << "] = " << Vector[j] << endl;
    }

    // Imprimir el resultado decimal
    cout << "RESULTADO: " << decimal << endl;

    return 0;
}