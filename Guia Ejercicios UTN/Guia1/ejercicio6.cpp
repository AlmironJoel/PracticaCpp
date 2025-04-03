// Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos para cada una de las cuatro semanas del mes. El programa debe listar la recaudación promedio por semana y el porcentaje de recaudación por semana.
// Ejemplo. Si se ingresa $1600, $1200, $4800 y $400 se listará como recaudación promedio $2000 y como porcentajes por semana: 20%, 15%, 60% y 5%.

#include <iostream>;
using namespace std;

int main(int argc, char const *argv[]){
    int s1,s2,s3,s4;
    int total,promedio;

    cout<<"Ingrese monto de la semana 1"<<endl;
    cin>>s1;
    cout<<"Ingrese monto de la semana 2"<<endl;
    cin>>s2;
    cout<<"Ingrese monto de la semana 3"<<endl;
    cin>>s3;
    cout<<"Ingrese monto de la semana 4"<<endl;
    cin>>s4;

    total=s1+s2+s3+s4;
    promedio=total/4;
    float rs1,rs2,rs3,rs4;
    rs1=s1*100/total;
    rs2=s2*100/total;
    rs3=s3*100/total;
    rs4=s4*100/total;
    cout<<"Resultado de la semana 1:"<<s1<<" Semana 2:"<<s2<<" Semana 3:"<<s3<<" Semana 4:"<<s4<<endl;
    cout<<"Promedio = "<<promedio<<endl;

    cout<<"Porcentaje de la semana 1:%"<<rs1<<" Semana 2:%"<<rs2<<" Semana 3:%"<<rs3<<" Semana 4:%"<<rs4<<endl;

    return 0;
}
