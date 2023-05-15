
#include <iostream>
#include <cstdlib>
using namespace std;

void showMSM(int seleccion){
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
    bool repetir = true;
    string respuesta;
    int seleccion;
    do {
        cout<< "\n\nMENU:\n\n 1- Playa del pacifico\n 2- Playa del Atlántico\n 3- Montaña en Panama Oeste\n 4- Montaña en el Occidente\n 5- En el centro de la ciudad\n\n>>> ";
        cin>> seleccion;
        showMSM(seleccion);
        
        cout << "\n\nQuiere seguir? \n(s para si, n para no)\n\n>>> ";
        cin >> respuesta;

        if (respuesta == "n" || respuesta == "N") {
            repetir = false;
            cout << "\n<<< Fin del algoritmo \n\n" << endl;
            
        } else if (respuesta == "s" || respuesta == "S") {
            repetir = true;

        } else {
            repetir = false;
            cout << "\n<<< Respuesta incorrecta \n\n" << endl;
            
        }
    } while (repetir);
    
    return 0;
}
