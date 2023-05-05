#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int intentos;
    int numeropropuesto;
    int num = 0;
    srand(static_cast<int>(time(0)));
    num = rand()%100;

    intentos =1;
    while (intentos <= 10){
        cout << "   ---  Intento ("<< intentos << ")  ---  \n\n >>> Inserte el Numero: ";
        cin >> numeropropuesto;
        ++intentos;
        cout << num;

        if (num == numeropropuesto){
            cout << "\n ---- FELICIDADES LO LOGRO ---- \n ---- Su numero es ("<<num<<") ---- " <<endl;
            break;
        }
        else if (not(num == numeropropuesto)){
            if (numeropropuesto > num){
                int diferencia = 0;
                diferencia =  numeropropuesto - num;
                if (diferencia >=25){
                    cout<< "\n>>> Estas frio menos es mas\n\n"<< endl;
                }
                else {
                    cout << "\n>>> Estas decimamente lejos, retrocede\n\n"<<endl;
                }
            }
            else{
                int diferencia = 0;
                diferencia = num-numeropropuesto;
                if (diferencia >= 15){
                    cout<< "\n>>> Estas frio, falta mucho\n\n"<< endl;
                }
                else{
                    cout << "\n>>> Estas decimamente cerca, avanza\n\n"<<endl;
                }
            }
        }
        }
    if (intentos == 11 ){
    cout <<"\n\n --- tus 10 vidas se han acabado (o < o) --- \n\n       >>> TU NUMERO ERA: ("<<num<<") <<< \n\n          Suerte para la Proxima \n\n\n"<<endl;
        }
}
