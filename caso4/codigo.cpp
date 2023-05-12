#include <iostream>
#include <cstdlib>
#include <math.h>
#include <list>
#include <string>  
#include <iomanip>
#include <sstream>
using namespace std;

void calcularVuelto(float precio, float cantidadEntregada) {

    float vuelto = cantidadEntregada - precio;
    float monedas[] = {1, 0.50, 0.25, 0.05, 0.01};
    int cantidadMonedas[5] = {0};
    list<string> listaTextos;

    for (int i = 0; i < 5; i++) {
        cantidadMonedas[i] = vuelto / monedas[i];
        vuelto = fmod(vuelto, monedas[i]);}

    for (int i = 0; i < 5; i++) {
        if (cantidadMonedas[i] > 0) {
            if (cantidadMonedas[1] == 1){
                ostringstream ss;
                ss << fixed << setprecision(2) << monedas[i];
                string numeroFormateado = ss.str();
                listaTextos.push_back("Una moneda de " + numeroFormateado +  "$\n");
            }

            else {
                ostringstream ss;
                ss << fixed << setprecision(2) << monedas[i];
                string numeroFormateado2 = ss.str();
                listaTextos.push_back (to_string(cantidadMonedas[i]) + " monedas de " + numeroFormateado2 + "$\n");
            }}}
    cout<< "\n\n<<< La cantidad de vuelto dada al Cliente: " <<fixed << setprecision(2) << cantidadEntregada - precio <<"$ >>>\n\nVuelto entragado por la maquina:\n"<< endl;
    for (const string& texto : listaTextos){
        cout << "     >>> "<<texto<< endl;
    }}

int main() {
    float precio, cantidadEntregada;
  
    cout << "\n>>> Ingrese el precio del artículo: ";
    cin >> precio;
  
    cout << "\n>>> Ingrese la cantidad entregada por el consumidor: ";
    cin >> cantidadEntregada;

    if (precio > cantidadEntregada){
        cout<< "\n<<< Dinero insuficiente\n";
    }
    else if (precio ==cantidadEntregada){
        cout<< "<<< El dinero entregado por el cliente concuerda con el precio del objeto comprado.\n\n>>> Precio: "<< precio<<"\n>>> Cantidad dada: "<< cantidadEntregada<<endl; 
    }
    else {
        calcularVuelto(precio, cantidadEntregada);
    }
    return 0;
}