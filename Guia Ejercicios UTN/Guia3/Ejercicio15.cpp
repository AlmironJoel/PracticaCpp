/*Hacer un programa para ingresar una lista de 8 números y luego informar si 
todos están ordenados en forma creciente. En caso de haber dos números 
“empatados” considerarlos como crecientes.  
Por ejemplo si la lista fuera:  
Ejemplo A: -10, 1, 5, 7, 15, 18, 20, 23 se emitirá un cartel: “Conjunto Ordenado” 
Ejemplo B: 10, 10, 15, 20, 25, 25, 28, 33 se emitirá un cartel: “Conjunto Ordenado” 
Eemplo C: 10, 1, 15, 7, -15, 18, 20, 23 se emitirá un cartel: “Conjunto No 
Ordenado” 
Para resolver este ejercicio sugerimos resolver antes el TP2 EJ 17. */
#include <iostream>
using namespace std;
int main() {
  int Vnum[8];
 bool creciente=true;
  cout<<"ingresa el numero"<<endl; 
  for (int i = 0; i < 8; i++){
    cin>>Vnum[i];
  }

  for (int i = 0; i < 8; i++){
    cout<<"lista : "<<endl<<Vnum[i]<<endl;
  }
  system("pause");//observamos lista
    int i=0;
    while (creciente && i<7){
      if (Vnum[i]<=Vnum[i+1]){
        cout<<"Entro al If While : "<<Vnum[i]<<" contra "<<Vnum[i+1]<<endl;
        i++;
      }else{
        cout << "Entro a cambiar el False"<<endl;
        creciente=false;
        i++;
      }
    }

    if (creciente){
      cout<<"Conjunto ordenado"<<endl;
    }else{cout<<"numero NO ORDENADOS"<<endl;}
    
  
    return 0;
}