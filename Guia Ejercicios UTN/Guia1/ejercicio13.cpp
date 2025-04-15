// Hacer un programa para un cajero automático para ingresar un importe a retirar y convertir el mismo en la cantidad de billetes de $1.000, $500, $200 y $100 a entregar.
// Ejemplo A: Si el importe a retirar es $2500 se mostrará por pantalla que se deberán entregar 2 billetes de $1.000, 1 billete de $500,  0 billetes de $200 y 0 billetes de $100.
// Ejemplo B: Si el importe a retirar es $3400 se mostrará por pantalla que se deberán entregar 3 billetes de $1.000, 2 billetes de $200, 0 billetes de $500 y 0 billetes de $100.
// Ejemplo C: Si el importe a retirar es $300 se mostrará por pantalla que se deberán entregar 1 billete de $200, 1 billete de $100, 0 billetes de $1.000 y 0 billetes de $500.
// Recordatorio. Considerar en todos los casos que el importe a retirar es en todos los casos múltiplo de $100 ya que el cajero no cuenta con billetes de $50, $20 o $10.
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
    int monto;
    cout<<"ingrese el monto";
    cin>>monto;
    int mil,quinientos,docientos,cien;
    mil=0;quinientos=0;docientos=0;cien=0;

    if(monto>=1000){
        mil=monto/1000;
        monto=monto%1000;
    }
    if(monto>=500){
        quinientos=monto/500;
        monto=monto%500;
    }
    if(monto>=200){
        docientos=monto/200;
        monto=monto%200;
    }
    if(monto>=100){
        cien=monto/100;
        monto=monto%100;
    }
    
    cout<<"se deberán entregar"<< docientos <<"billete de $200, "<< cien <<" billete de $100, "<<mil<< "billetes de $1.000 y "<<quinientos<<" billetes de $500."<<endl;
    return 0;
}
