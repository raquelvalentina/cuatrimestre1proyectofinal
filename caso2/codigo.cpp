//  Caso 2:

// "TravelPlus" ofrece alojamientos en varios hoteles de Panama
// Para poder direccionar mejor a sus clientes, necesita un programa que le indique a que hotel le 
// conviene ir dependiendo del sector y preferencia del cliente. 

// Confeccione un algoritmo que le consulte al usuario que ambiente le gustaria ir:



// Dependiendo de la respuesta del usuario el algoritmo le debe indicar el nombre del Hotel:
// 1. Hotel Playa Blanca
// 2. Hotel Isla Grande
// 3. Hotel Los Mandarinos
// 4. Hotel Valle Escondido
// 5. Hotel Riu

// Escriba el algoritmo en Pseudocodigo
// Confeccione el Diagrama de Flujos
// Confeccione el Diagrama Nassi-Schneiderman

#include <iostream>
#include <cstdlib>
using namespace std;

void travelPlus(int seleccion){
    switch (seleccion) {
        case 1:
            cout << "\n\nHotel Playa Blanca\n\n"<< endl; 
            break;
        case 2:
            cout<< "\n\nHotel Isla Grande\n\n"<< endl; 
            break;
        case 3:
            cout<< "\n\nHotel Los Mandarinos\n\n"<< endl; 

            break;
        case 4:
            cout<< "\n\nHotel Valle Escondido\n\n"<< endl; 
            break;
        case 5:
            cout<< "\n\nHotel Riu\n\n"<< endl; 
            break;

        default:
            cout << "\n\nEligio una Opcion que no esta en el menu porfavor intentelo de nuevo\n\n" << endl;
            break;
    }
}

int main(){
    bool repetir = false;
    string respuesta;
    int seleccion2;
    do {
        cout<< "\n\nMENU:\n\n 1- Playa del pacifico\n 2- Playa del Atlántico\n 3- Montaña en Panama Oeste\n 4- Montaña en el Occidente\n 5- En el centro de la ciudad\n\n>>> ";
        cin>> seleccion2;
        travelPlus(seleccion2);
        cout << "\n\nQuiere seguir? \n (s para si, n para no)\n\n>>> ";
        cin >> respuesta;

        if (respuesta == "n" || respuesta == "N") {
            repetir = true;
        } else if (respuesta == "s" || respuesta == "S") {
            repetir = false;
        } else {
            cout << "\n<<< Respuesta incorrecta \n\n" << endl;
            repetir = false;
        }
    } while (!repetir);
    
    return 0;
}
