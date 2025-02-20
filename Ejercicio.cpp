#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
//funciones
int produc (int n1,int n2);
{
int r=0;
int n1,n2;

 cout << "ingresa el primer numero";
 cin >> n1;
 cout << "ingresa el primer numero";
 cin >> n2;
    
 r=produc(n1,n2);

 cout<< r;
    return 0;
}
int produc (int n1,int n2){
    int r;
    r=n1*n2;
    return r
}