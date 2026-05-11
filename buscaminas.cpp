#include <iostream>

using namespace std;

bool idenmina (int f, int c, int matriztablero[4][4]) {
        if (matriztablero[c][f] == 1) {
            return true;
        }
        return false;
     }

int main()
{
    
//ejercicio 6

    cout << "BUSCAMINAS" << endl;

     

    int matriztablero[4][4] = {0}; //Iguala todo los espacios a 0
    matriztablero[1][3] = 1; //casilla de la mina

    int filas, colum;
    bool encon = false;

    for (int i = 0; i < 5; i++) {
        cout << "Turno num. " << i + 1 << "." << endl;
        cout << "Ingrese el numero de fila (0-3): ";
        cin >> filas;
        cout << "Ingrese el numero de columna (0-3): ";
        cin >> colum;

        if (filas >= 0 && filas <= 3) {
            
            if (colum >= 0 && colum <=3) {
                
                if (idenmina(filas, colum, matriztablero)){
                    cout << "Mina encontrada" << endl;
                    encon = true;

                    if (encon == true) {
                        cout << "Perdiste el juego :(";
                        return 0;
                    }

                    else {
                        encon = false;
                    }

                }
                else {
                    cout << "Posicion sin mina" << endl;
                    cout << "Siguiente turno..." << endl << endl;
                }
            }
            
            else {
                cout << "Valor de columna invalido, ingrese de nuevo todos los datos" << endl;
                i--;
            }
        
        }
        
        else {
            cout << "Numero de fila invalido, ingrese de nuevo todos los datos" << endl;
            i--;
        }
    }

    if (encon == false) {
        cout << "No encontraste la mina" << endl;
        cout << "Ganaste el juego :)" << endl;
    }

    return 0;
}