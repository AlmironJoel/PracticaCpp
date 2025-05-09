// Hacer un programa en el que se ingrese la edad y altura de 5 personas. Luego, calcular e informar:
//* La cantidad de personas mayores a 30 años que midan más de 1.8 metros.
//* El promedio de altura de las personas mayores a 30 años.
//* La cantidad de personas con altura entre 1.7 y 1.8 (ambos inclusive)
//* La cantidad de personas cuya edad sea de 20, 30 o 40 años.
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    int edad;
    float alt;
    int contadorMayor=0,acuAltura=0,acuAltura2=0,acuedades=0,promedio;

    for (int i = 0; i < 3; i++){
        cout<<"introduce la edad la persona "<<i+1;
        cin>>edad;
        cout<<" y a continuacion su altura con punto"<<endl;
        cin>>alt;

        if(edad>30){
            if (alt>1.80){
                contadorMayor++;
                acuAltura=acuAltura+alt;
            }    
        } else if (alt>=1.70 && alt<=1.80){
            acuAltura2++;
        }
        
        if (edad==20||edad==30||edad==40){
            acuedades++;
        }
    }
    promedio=acuAltura/contadorMayor;
    cout<<"La cantidad de personas mayores son : "<<contadorMayor<<endl;
    cout<<"El promedio de altura de personas mayores a 30 son : "<<promedio<<endl;
    cout<<"La cantidad de personas que miden entre 1.70 y 1.80 son : "<<acuAltura2<<endl;
    cout<<"La cantidad de personas entre 20 ,30,40 son : "<<acuedades<<endl;
    
    return 0;
}
