#include<iostream>
using namespace std;
//*Consigna
// Hacer un programa que solicite una serie de valores de tipo char (caracteres).
// Se entiende por carácter a cada elemento que se obtiene de presionar una
// tecla. Por ejemplo el valor “25” tiene dos caracteres (si quisiéramos guardarlo
// en variables enteras nos alcanza con una, pero si queremos guardarlo en
// variables char, necesitaremos dos); la frase “maxi programa” tiene 13 (se
// incluye el espacio como un carácter).
// La cantidad de valores será como máximo 50, pero el programa puede cortar
// antes si se ingresa el carácter “.” (punto). Una vez cargado el vector de char,
// recorrerlo y reemplazar todas las apariciones de la letra “a” por la letra “e”,
// por ejemplo:
// Vector char original: “Hola muchachada cómo están”.
// Vector char modificado: “Hole muchechede cómo esten”
// Finalmente, mostrar el resultado en pantalla.
// Nota: necesitaremos un vector char de 50, pero no lo cargaremos con un For.

//?Funcion
void cargarVector(char Vchar[50]){
    char l;
    int i;
    i=0;
    cout << "introduzca la letra";
    cin>> l;


    while (i<50 && l!='.'){
        Vchar[i]=l;
        i++;           // Incrementar el índice
        cout << "Introduzca la letra: ";
        cin >> l; 
    }
    Vchar[i]='\0';
}

void remplazarLetra(char Vchar[50],char letraB,char letra){
        
    for (int i = 0; i < 50; i++){
        if (Vchar[i]==letraB)  {
            Vchar[i]=letra;
        }
    }     
}

void mostrarVector (char Vchar[50]){
    int i;
    i=0;
    while (Vchar[i]!='\0')
    {
        cout<< Vchar[i];
        i++;
    }   
}

//?main
int main(int argc, char const *argv[])
{
    char Vchar[50];
    cargarVector(Vchar);
    
    char letra;
    char letraB;
    cout << "Introduzca la letra a Buscar: ";
    cin >> letraB;
    cout << "Introduzca la letra a reemplazar: ";
    cin >> letra;

    remplazarLetra(Vchar,letraB,letra);

    mostrarVector(Vchar);

    return 0;

}//?Fin main
