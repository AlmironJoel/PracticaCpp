// Hacer un programa para ingresar por teclado la fecha de nacimiento de una persona, ingresando día, mes y año como 3 datos individuales. Luego ingresar la fecha actual ingresando día, mes y año como 3 datos individuales. Calcular luego la edad en años de esa persona y listar por pantalla. 
// Ejemplo 1. Si se ingresa como fecha de nacimiento: 3/12/2000 y la fecha actual es 26/2/2019 la edad de esa persona es 18 ya que los 19 recién los cumple en diciembre. 
// Ejemplo 2. Si se ingresa como fecha de nacimiento: 3/1/2000 y la fecha actual es 26/2/2019 la edad de esa persona es 19. 
// Ejemplo 3. Si se ingresa como fecha de nacimiento: 28/2/2000 y la fecha actual es 26/2/2019 la edad de esa persona es 18 ya que le faltan 2 días para cumplir los 19 años.
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
    
    int edad,dia,mes,ano,diaAct,mesAct,anoAct;
        cout<<"ingrese dia , mes y año de nacimiento"<<endl;
        cin>>dia;
        cin>>mes;
        cin>>ano;
        
        cout<<"ingrese dia , mes y año ACTUAL"<<endl;
        cin>>diaAct;
        cin>>mesAct;
        cin>>anoAct;

        if (anoAct>ano){
            edad=anoAct-ano;

            //caso que sea el mismo mes
            if (mes==mesAct){
                //verificamos el dia
                if (dia>=diaAct){
                    cout<<"Tu edad es :"<<edad-1<<endl;
                }else{
                    cout<<"Tu edad es :"<<edad<<endl;
                }
            }else if (mes<mesAct){//caso que los meses sean distintos
                cout<<"Tu edad es :"<<edad<<endl;
            }else{
                cout<<"Tu edad es :"<<edad-1<<endl;
            }
        }else{
            cout<<"el año actual no puede ser menor al año de nacimiento"<<endl;
        }
        
    return 0;
}
