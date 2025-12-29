/*
Una estación meteorológica registró una muestra climática de los últimos 15 
días. Por cada día registró: - - - 
-Número de día (entero) 
-Temperatura (float) 
-Milímetros de lluvia (float)  
-Visibilidad en km (float) 

Hay un registro por cada día. La información se encuentra ordenada por día. Se 
pide calcular e informar: - - - - 
*1-El número del día que se haya registrado la temperatura máxima. 
*2-La amplitud térmica de todo el período. 
*3-La cantidad de días con neblina. 

todo 4-
TODO Mostrar "Quincena lluviosa" si hubo más días de lluvia que días sin lluvia. 
TODO Mostrar "Quincena húmeda" si llovió en al menos un tercio de los días. 
TODO De lo contrario mostrar "Quincena seca". 

? NOTA: La amplitud térmica es la diferencia entre la temperatura máxima y la temperatura mínima. 
? NOTA: Se considera neblina a una visibilidad menor a 2 km. 
*/
#include <iostream>
using namespace std;

// estructuras
struct datosClimatico {
    int numD;
    float temperatura;
    float mmLluvia;
    float visivilidadKM;
};

int main() {
    datosClimatico diaClimatico[15];

    float maxTemp, minTemp;
    int diaMaxTemp = 1;
    float amplitudTermica = 0;

    int diasNeblina = 0;
    int diasLluvioso = 0, diasSinLluvia = 0;

    // Carga de datos
    for (int i = 0; i < 15; i++) {
        cout << "Usted se encuentra en el dia: " << i + 1 << endl;

        diaClimatico[i].numD = i + 1;

        cout << "Ingrese temperatura: ";
        cin >> diaClimatico[i].temperatura;

        cout << "Ingrese milimetros de lluvia: ";
        cin >> diaClimatico[i].mmLluvia;

        cout << "Ingrese visibilidad en kms: ";
        cin >> diaClimatico[i].visivilidadKM;
    }

    // Inicialización de max y min
    maxTemp = diaClimatico[0].temperatura;
    minTemp = diaClimatico[0].temperatura;

    // Procesamiento de datos
    for (int i = 0; i < 15; i++) {

        // Punto 1: temperatura máxima y día
        if (diaClimatico[i].temperatura > maxTemp) {
            maxTemp = diaClimatico[i].temperatura;
            diaMaxTemp = diaClimatico[i].numD;
        }

        // Punto 2: temperatura mínima
        if (diaClimatico[i].temperatura < minTemp) {
            minTemp = diaClimatico[i].temperatura;
        }

        // Punto 3: días con neblina
        if (diaClimatico[i].visivilidadKM < 2) {
            diasNeblina++;
        }

        // Punto 4: días lluviosos y sin lluvia
        if (diaClimatico[i].mmLluvia > 0) {
            diasLluvioso++;
        } else {
            diasSinLluvia++;
        }
    }

    // Cálculo de amplitud térmica
    amplitudTermica = maxTemp - minTemp;

    // Salida de resultados
    cout << "\nRESULTADOS\n";
    cout << "Dia con temperatura maxima: " << diaMaxTemp << endl;
    cout << "Amplitud termica: " << amplitudTermica << endl;
    cout << "Cantidad de dias con neblina: " << diasNeblina << endl;

    // Evaluación de la quincena
    if (diasLluvioso > diasSinLluvia) {
        cout << "Quincena lluviosa" << endl;
    } else if (diasLluvioso >= 5) { // un tercio de 15
        cout << "Quincena humeda" << endl;
    } else {
        cout << "Quincena seca" << endl;
    }

    return 0;
}
