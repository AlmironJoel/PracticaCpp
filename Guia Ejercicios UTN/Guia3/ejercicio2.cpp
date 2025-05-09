// Hacer un programa para mostrar por pantalla los números del 1 al 20 salteando de a 3 valores. Es decir: 1, 4, 7, 10, 13, 16, 19.
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    for (int i = 1; i <= 20; i++){
        int r;
        cout<<i<<endl;
        i=i+2;
    }
        
    return 0;
}
