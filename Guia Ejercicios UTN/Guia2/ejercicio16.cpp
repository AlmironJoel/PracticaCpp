// Hacer un programa para ingresar por teclado las cuatro notas de los exámenes obtenidas por un alumno y luego emitir uno solo de los cartel de acuerdo a las siguientes condiciones: 
//* - “Promociona”, sí obtuvo en los cuatro exámenes nota 7 o más. 
// - “Rinde examen final”, si obtuvo nota 4 o más en por lo menos tres exámenes. 
//* -“Recupera Parciales”, si obtuvo nota 4 o más en por lo menos uno de los exámenes. 
//* - “Recursa la materia”, si no aprobó ningún examen parcial

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int n1,n2,n3,n4,aprobado=0;
    cout<<"ingre las 4 notas..."<<endl;
    cin>>n1;
    cin>>n2;
    cin>>n3;
    cin>>n4;
    const int total=(n1+n2+n3+n4);
    const int promedio=total/4;
    if (n1>4){aprobado++;}
    if (n2>4){aprobado++;}
    if (n3>4){aprobado++;}
    if (n4>4){aprobado++;}
    
    if (promedio>=7){
        cout<<"Promociona"<<endl;
    }else if (aprobado==3){
        cout<<"Rinde Examen final"<<endl;
    } else if (n1>=4||n2>=4||n3>=4||n4>=4)
    {
        cout<<"recupera parciales"<<endl;
    } else if (promedio<4){
        cout<<"Recursa la materia"<<endl;
    }
    
    return 0;
}
