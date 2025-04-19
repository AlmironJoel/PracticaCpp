//Hacer un programa para ingresar cinco números y listar el máximo y el mínimo de ellos.
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int min,max,n;
    bool bMin=false,bMax=false;
    
    for (int i = 0; i < 5; i++){
        cout<<"Ingrese el numero"<<endl;
        cin>>n;
        
        if (!bMax){
            max=n;
            bMax=true;
        } else if (!bMin){
            min=n;
            bMin=true;
        } else if (n>max){
            max=n;
        }else if(n<min){
            min=n;
        }       
        
    }
    //5 6 18 3 1
    cout<<"minimo :"<<min<<endl;
    cout<<"Maximo :"<<max<<endl;
    return 0;
}
