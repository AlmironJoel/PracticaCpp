/* 
Se dispone de la información de los últimos 5 partidos del futbolista Diego 
Armando Laradona. Por cada partido se registró: 
-Número de partido int
-Minutos jugados int
-Tarjetas amarillas int
-Tarjetas rojas -int
-Goles int

Existe un registro para cada partido. Los mismos se encuentran ordenados por 
número de partido. Se pide calcular e informar: 
*A) La cantidad de partidos que no jugó (partidos con minutos igual a cero) 
*B) La cantidad de partidos que jugó por completo (minutos >= 90) 
*C) El promedio de tarjetas recibidas por partido. 
*D) El número de partido en el que haya convertido mayor cantidad de goles. 
*Indicar también los goles convertidos. 
E) La mejor racha de partidos convirtiendo goles. Se debe mostrar la mayor 
cantidad de partidos consecutivos en los que haya convertido.
*/
#include <iostream>
using namespace std;
//Struc
struct jugador{
    int numeroPartido=0;
    int minJugados=0;
    int tarjAmarillas=0;
    int tarjRojas=0;
    int goles=0;
};
//Funciones Declaradas
void cargarDatos(jugador futbolista[5]);
int procesoPuntoA(jugador fulbolista[5]);
int procesoPuntoB(jugador fulbolista[5]);
float procesoPuntoC(jugador fulbolista[5]);
void procesoPuntoD(jugador fulbolista[5]);
void procesoPuntoE(jugador fulbolista[5]);

int main() {
    jugador futbolista[5];
    int partidosNoJugados=0,partidosCompletos=0;
    float promTarjetas=0;
    cargarDatos(futbolista);
    partidosNoJugados=procesoPuntoA(futbolista);
    partidosCompletos=procesoPuntoB(futbolista);
    promTarjetas=procesoPuntoC(futbolista);
    procesoPuntoD(futbolista);
    procesoPuntoE(futbolista);
    
    return 0;
}

//Funciones
void cargarDatos(jugador futbolista[5]){
    for (int i = 0; i < 5; i++){
        cout<<"Los datos del numero de partido "<<i+1<<" por favor."<<endl;
        futbolista[i].numeroPartido=i+1;
        cout<<"Minutos jugados → "<<endl;
        cin>>futbolista[i].minJugados;
        cout<<"Cantidad de tarjetas AMARILLAS en caso de tenerlas →"<<endl;
        cin>>futbolista[i].tarjAmarillas;
        cout<<"Cantidad de tarjetas ROJAS en caso de tenerlas →"<<endl;
        cin>>futbolista[i].tarjRojas;
        cout<<"Cantidad de GOLES →"<<endl;
        cin>>futbolista[i].goles;
    }
}
int procesoPuntoA(jugador fulbolista[5]){
    
    int contador=0;
    for (int i = 0; i < 5; i++){
        if (fulbolista[i].minJugados<=0){
            contador++;
        }
    }
    return contador;    
}
int procesoPuntoB(jugador fulbolista[5]){
    int contador=0;
    for (int i = 0; i < 5; i++){
        if (fulbolista[i].minJugados>= 90){
            contador++;
        }
    }
    return contador;  
}
float procesoPuntoC(jugador fulbolista[5]){
    int contador=0;
    float promedio=0;
    for (int i = 0; i < 5; i++){
        if (fulbolista[i].tarjAmarillas>0){
            contador+=fulbolista[i].tarjAmarillas;
        }
        if (fulbolista[i].tarjRojas>0){
            contador+=fulbolista[i].tarjRojas;
        }
    }
    promedio=contador/5;
    return promedio;
}
void procesoPuntoD(jugador fulbolista[5]){
    int maxGol=0;
    int indicePartido=0;
    for (int i = 0; i < 5; i++){
        if (fulbolista[i].goles>maxGol){
            maxGol=fulbolista[i].goles;
            indicePartido=i;
        }
    }
    cout<<"El mayor numero de goles fuero "<<maxGol<<" goles, y fueron echos en el partido numero : "<<indicePartido+1;
}
void procesoPuntoE(jugador fulbolista[5]){
    int racha=0,maxRacha=0;
    for (int i = 0; i < 5; i++){
        if (fulbolista[i].goles>0){
            racha++;
        }else{
            if (racha>maxRacha){
                maxRacha=racha;
            }
            racha=0;
        }
    }
      if (racha > maxRacha) {
        maxRacha = racha;
    }
    cout<<"La mayo racha de partidos consecutivos fue de : "<<maxRacha<<endl; 
}/**/