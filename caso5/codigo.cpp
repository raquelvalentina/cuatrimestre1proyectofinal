#include <iostream>
#include <cstdlib>
#include <list>
#include <vector>
using namespace std;

int promedio(int a, int b, int c){
    return (a +b + c)/3;
}

int main(){
    vector<int> listaNumeros;
    for (int i = 1; i <= 3; ++i){
        cout << ">>> Ingrese el valor " << i << ": ";
        int numero;
        cin >> numero;
        listaNumeros.push_back(numero);
    }

    int a = listaNumeros[0];
    int b = listaNumeros[1];
    int c = listaNumeros[2];

    int resultado = promedio(a, b, c);
    cout << "El promedio es: " << resultado << endl;
    
    return 0;}