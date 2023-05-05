#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int vehiculos_D = 50;
    int vehiculos_G = 42;
    int seleccion;
    int cantidad;

    cout << "\n  Menu: Seleccion Del Vehiculo\n\n1 -- Vehiculos de diesel \n2 -- Vehiculos de Gasolina\n \nInserte el numero del vehiculo: ";
    cin >> seleccion;
    switch (seleccion) {
        case 1:
            cout << "--- Vehiculo de diesel por unidad (50$) ---\n\n Cantidad de Vehiculos: "; 
            cin >> cantidad;
            cantidad = cantidad * vehiculos_D
            cout << "\n >> Monto total: "<< cantidad<< "$"<< endl;
            break;
        case 2:
            cout<< "--- Vehiculo de Gasolina por unidad (42$) ---\n\nCantidad de Vehiculos: "; 
            cin >> cantidad;
            cantidad = cantidad * vehiculos_G;
            cout << "\n >> Monto total: "<< cantidad << "$" << endl;
            break;
        default:
            cout << "Eligio una Opcion que no esta en el menu porfavor intentelo de nuevo" << endl;
            break;
    }

}


