#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout<< "colocar numero";
    cin >> n;
    int Vector[50];
    int i=0;
    if(n== 0){
        cout<<"el numero ingresado es: "<<n<<" y su equiivalente binario es :000";
    }
    while ( n !=0)
    {
        Vector[i]=n%2;
        n=n/2;
        cout<<"numero : "<< n << endl;
        i++;
    }   
    
for (int j = 0; j <i; j++){
        cout<<"Residuo: "<< Vector[j]<<endl;
    }
    
    
    return 0;
}
