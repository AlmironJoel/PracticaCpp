#include <iostream>
using namespace std;

//* Consigna
// Dada una lista de 10 números, cargarlos en un vector. Luego detectar si en el
// vector hay algún elemento repetido. De haberlo, indicarlo con un cartel
// aclaratorio “Hay repetidos”, de lo contrario indicar “No hay repetidos”.
// Pista: usar ciclos combinados.

//?FUNCIONES
void cargarVector(int Vnum[5]){
    int num;
    for (int i = 0; i < 5; i++)
    {
        cout<<"Introduzca el numero";
        cin >> num;
        Vnum[i]=num;
    }    
}

void searchRepeat(int Vnum[5]){
    int n,count;
    bool ban = false;
    for (int i = 0; i < 5; i++){
        count=0;
        n=Vnum[i];
            for (int j = 0; j < 5; j++){
                if (n==Vnum[j]) {
                    count++ ; }
                
            }
        if (count==2)
        {
            ban=true;
        }
        
    }
    if (ban){
        cout<<"numero repetido";
    }else{
        cout<<"numeros diferentes";
    }
    
    
}


//?MAIN
int main(int argc, char const *argv[])
{
    int Vnum[5];
    cargarVector(Vnum);
    searchRepeat(Vnum);

    return 0;
}//FIN MAIN
