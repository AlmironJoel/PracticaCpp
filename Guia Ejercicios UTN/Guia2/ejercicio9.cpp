//Hacer un programa para ingresar tres números y listar el máximo de ellos.
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
int max=0,n;
bool b=false;
for (int i = 0; i < 3; i++){
    cout<<"ingrese el numero"<<endl;
    cin>> n;
    if(!b){
        max=n;
        b=true;
        cout<<"Max vale por primera vez:"<<max<<"y B pasa a valer"<<b<<endl;
        
    }else if(n>max){
        max=n;
    }
}

cout<<"El numero mas grande es: "<<max<<endl;
    return 0;
}
