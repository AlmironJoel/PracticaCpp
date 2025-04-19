// Una marroquinería dispone de 45 carteras blancas, 50 carteras negras, 40 marrones y 49 grises. Se pide hacer un programa donde se ingresen tres ventas. Cada venta está compuesta por:
// Cantidad de carteras
// Tipo de cartera (1 - Blanco, 2 - Negro, 3- Marrón, 4 - Gris)

// Calcular e informar:
//* Cantidad total de carteras vendidas en total.
//*Cuántas carteras quedaron de cada tipo.
//* Los colores de carteras que no se vendieron.
// NOTA: Ninguna venta superará las 10 carteras

#include <iostream>
using namespace std;
   
int main(int argc, char const *argv[]){
    int carteraBl=45,carteraNgr=50,carteraMarrones=40,carterasGris=49;
    int count=0;
    bool b1=false,b2=false,b3=false,b4=false;

    for (int i = 0; i < 3; i++){
        int cantCarteras;
        int tipoCartera;
        cout<<"Ingrese cantidad de carteras"<<endl;
        cin>>cantCarteras;
        cout<<"Ingrese tipo de cartera"<<endl;
        cin>>tipoCartera;
        if(cantCarteras<10){
            count=+cantCarteras;

            switch (tipoCartera){
                case 1:
                    carteraBl=carteraBl-cantCarteras;
                    cout<<"bajo el stock de esta cartera. Stock actual: "<<carteraBl<<endl;
                    b1=true;
                    break;
                case 2:
                    carteraNgr=carteraNgr-cantCarteras;
                    cout<<"bajo el stock de esta cartera. Stock actual: "<<carteraNgr<<endl;
                    b2=true;
                    break;
                case 3:
                    carteraMarrones=carteraMarrones-cantCarteras;
                    cout<<"bajo el stock de esta cartera. Stock actual: "<<carteraMarrones<<endl;
                    b3=true;
                    break;
                case 4:
                    carterasGris=carterasGris-cantCarteras;
                    cout<<"bajo el stock de esta cartera. Stock actual: "<<carterasGris<<endl;
                    b4=true;
                    break;
                default:
                    break;
                }
        }else{
            cout<<"La cantidad solicitada no debe superar las 10 unidades"<<endl;
        }
    }//for
    if (!b1){
        cout<<"No se vendieron carteras Blancas"<<endl;
    }
    if (!b2){
        cout<<"No se vendieron carteras Negras"<<endl;
    }
    if (!b3){
        cout<<"No se vendieron carteras Marrones"<<endl;
    }
    if (!b4){
        cout<<"No se vendieron carteras Grises"<<endl;
    }
    cout<<"Cantidad de Carteras Vendidas : "<<count<<endl;
    
    

    return 0;
}
