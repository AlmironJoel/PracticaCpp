/*
La cuenta corriente de la famosa cantante Lady Lara ha registrado 14 
movimientos durante la semana pasada. Por cada movimiento se registró: 
*Número de movimiento 
*Día 
*Tipo ('E' - Extracción / 'D' - Depósito) 
*Importe

?Existe un registro por movimiento. Se desea calcular e informar:
todo El saldo final de la cuenta. 
todo *El porcentaje de movimientos de extracción y el porcentaje de depósito. 
todo *El depósito de mayor importe indicando también día y número de movimiento. 
todo *La cantidad de movimientos del día 10. 
*/

#include <iostream>
using namespace std;
//Struct
struct Movimiento {
    int idMovimiento=0;
    int dia=0;
    char transaccion='n';
    float importe=0;
};

//declarar funciones;
void cargarDatos(Movimiento cuentaCorriente[4]);
void mostrarDatos(Movimiento cuentaCorriente[4]);
void procesoDatos(Movimiento cuentaCorriente[4],float &saldo,float &porcentajeExtracion, float &porcentajeDepositos,Movimiento &mayorImport, int &movimientos);

int main() {
    float saldo=0,porcentajeExtracion=0,porcentajeDepositos=0;
    int movimientos=0;

    Movimiento cuentaCorriente[4];
    Movimiento mayorImport;  
    
    cargarDatos(cuentaCorriente);
    system("pause");
    mostrarDatos(cuentaCorriente);
    system("pause");
    procesoDatos(cuentaCorriente,saldo,porcentajeExtracion,porcentajeDepositos,mayorImport,movimientos);

    cout<<"Estado de cuenta $"<<saldo<<endl;

    cout<<"El Porcentaje de deposito fue de un %"<<porcentajeDepositos<<", mientras que el de Extraccion fue de un %"<<porcentajeExtracion<<endl;
    
    cout<<"Porcentaje de Extracciones %"<<porcentajeExtracion<<" depositos %"<<porcentajeDepositos<<endl;

    cout<<"El mayor valor depositado en estos ultimos dias fue: $"<<mayorImport.importe<<", numero de transaccion N°"<<mayorImport.idMovimiento<<", el dia numero "<<mayorImport.dia<<endl;

    cout<<"Cantidad de movimientos echos el dia 10 fueron: "<<movimientos<<endl;
    system("pause");
    
    return 0;
}

//Funciones
void cargarDatos(Movimiento cuentaCorriente[4]){
    for (int i = 0; i < 4; i++){
        cout<<"Ingrese Dia"<<endl;
            cin>>cuentaCorriente[i].dia;
        cout<<"Ingrese numero de Movimiento"<<endl;
            cin>>cuentaCorriente[i].idMovimiento;
        cout<<"Ingrese Importe por favor..."<<endl;
            cin>>cuentaCorriente[i].importe;
        cout<<"Ingrese tipo de transaccion ¨D¨ para deposito o ¨E¨ para Extraccion"<<endl;
            cin>>cuentaCorriente[i].transaccion;

       if (cuentaCorriente[i].transaccion=='d'||cuentaCorriente[i].transaccion=='D'||cuentaCorriente[i].transaccion=='e'||cuentaCorriente[i].transaccion=='E'){
           cout<<"registro N° "<<i+1<<" Cargado."<<"\n"<<endl;
       }else{
        while (cuentaCorriente[i].transaccion!='d'||cuentaCorriente[i].transaccion!='D'||cuentaCorriente[i].transaccion!='e'||cuentaCorriente[i].transaccion!='E'){
            cout<<"Informacion de transaccion erronea, vuelve a ingresar el tipo de transaccion. E extrasccion  D deposito."<<endl;
            cin>>cuentaCorriente[i].transaccion;
        }
       }
    
    }
}
void mostrarDatos(Movimiento cuentaCorriente[4]){
        for (int i = 0; i < 4; i++){
        cout<<"Dia"<<cuentaCorriente[i].dia<<endl;

        cout<<"numero de Movimiento: "<<cuentaCorriente[i].idMovimiento<<endl;
        
        cout<<"Importe : "<<cuentaCorriente[i].importe<<endl;

        cout<<"Ingrese tipo de transaccion : "<<cuentaCorriente[i].transaccion<<endl;
        cout<<"registro N° "<<i+1<<" terminado."<<"\n"<<endl;
    }
}

void procesoDatos(Movimiento cuentaCorriente[4],float &saldo,float &porcentajeExtracion, float &porcentajeDepositos,Movimiento &mayorImport, int &movimientos){
    int extrac=0,depo=0;
    for (int i = 0; i < 4; i++){
        if (i==3){
            movimientos++;
            cout<<"Se registro el dia numero 4,movimiento aumento..."<<endl;
        }
        if (cuentaCorriente[i].transaccion=='d'||cuentaCorriente[i].transaccion=='D') {
            depo++;
            saldo+=cuentaCorriente[i].importe;
            if (cuentaCorriente[i].importe>mayorImport.importe){
                mayorImport.importe=cuentaCorriente[i].importe;
                mayorImport.dia=cuentaCorriente[i].dia;
                mayorImport.idMovimiento=cuentaCorriente[i].idMovimiento;
            }            
        } 
        else if (cuentaCorriente[i].transaccion=='e'||cuentaCorriente[i].transaccion=='E'){
            extrac++;
            saldo-=cuentaCorriente[i].importe;
        }   
    }
    porcentajeExtracion=extrac*100/4;
    porcentajeDepositos=depo*100/4;
}