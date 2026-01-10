/*
 Hacer un programa para ingresar una lista de 13 números enteros. Se pide 
luego determinar e informar: 
A) La cantidad de ternas de valores positivos consecutivos. 
B) La cantidad de ternas de valores negativos consecutivos y ordenados en 
forma creciente. 
Ejemplo si la lista fuera: 10, 5, 4, 3, -8, -3, -1, 0, 3, 8, -5, -8, -10 entonces el 
programa detectará una terna de positivos consecutivos (10, 5, 4) y una terna de 
negativos consecutivos ordenados (-8, -3, -1) 
Nota: Si el número ingresado es cero, no se lo considera ni negativo ni positivo. 
Nota: La terna (-5, -8, -10) no es contabilizada ya que no se encuentra ordenada 
crecientemente.
    */#include <iostream>
using namespace std;

void cargarNum(int lista[13]);

int main() {
    int lista[13];
    cargarNum(lista);

    int contadorPos = 0;
    int contadorNeg = 0;

    for (int i = 0; i < 11; i++) {

        // Ternas positivas
        if (lista[i] > 0 && lista[i+1] > 0 && lista[i+2] > 0) {
            contadorPos++;
            cout << "Terna positiva: "
                 << lista[i] << ", "
                 << lista[i+1] << ", "
                 << lista[i+2] << endl;
        }

        // Ternas negativas crecientes
        if (lista[i] < 0 && lista[i+1] < 0 && lista[i+2] < 0 &&
            lista[i] < lista[i+1] && lista[i+1] < lista[i+2]) {
            contadorNeg++;
            cout << "Terna negativa creciente: "
                 << lista[i] << ", "
                 << lista[i+1] << ", "
                 << lista[i+2] << endl;
        }
    }

    cout << "\nTotal de ternas positivas: " << contadorPos << endl;
    cout << "Total de ternas negativas crecientes: " << contadorNeg << endl;

    return 0;
}

void cargarNum(int lista[13]) {
    for (int i = 0; i < 13; i++) {
        cout << "Ingrese numero: ";
        cin >> lista[i];
    }
}
