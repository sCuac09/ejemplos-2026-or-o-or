#include <iostream>

using namespace std;

int main()
{
    
    //Primer ejercicio
    float arraynota[5];

    cout << "CALCULO DE NOTAS" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Ingrese la nota num. " << i + 1 << " : ";
        cin >> arraynota[i];
    }

    float suma = 0;
    for (int i = 0; i < 5; i++) {
        suma += arraynota[i];
    }

    float promedio = suma / 5;

    for (int i = 0; i < 5; i++) {
        cout << "La nota num. " << i + 1 << " es: ";
        cout << arraynota[i] << endl;
    }

    cout << endl << "El promedio es de: " << promedio << endl;

    float may = arraynota[0]; //Se busca que la variable se iguale con el primer elemento
    for (int i = 0; i < 5; i++) {
        if ( may < arraynota[i]) {
            may = arraynota[i];
        } 
    }

    float men = arraynota[0];
    for (int i = 0; i < 5; i++) {
        if (men > arraynota[i]) {
            men = arraynota[i];
        }
    }



    cout << "El valor mayor es: " << may << endl << endl;

    cout << "El valor menor es: " << men << endl << endl;

    //ejercicio2

    cout << "PARES E IMPARES" << endl;
    int arraynum[10];

    for (int j = 0; j < 10; j++) {
        cout << "Ingrese la cifra num. " << j + 1 << " : ";
        cin >> arraynum[j];
    }

    int par = 0;
    int impar = 0;
    for (int j = 0; j < 10; j++) {
        if (arraynum[j] % 2 == 0) {
            par++;
        }
        else {
            impar++;
        }
    }

    cout << "El total de numeros pares es de: " << par << endl;
    cout << "El total de numeros impares es de: " << impar << endl;
    cout << endl << endl;


    //ejercicio 3
    cout << "BUSQUEDA DE NUMERO" << endl;
    int arraybus[20];

    for (int a = 0; a < 20; a++) {
        cout << "Ingrese la cifra num. " << a + 1 << " : ";
        cin >> arraybus[a];
        cout << endl;
    }

    cout << endl;
    cout << "Ingrese el numero por buscar: ";
    int bus;
    cin >> bus;

    bool encon = false;
        for (int a = 0; a < 20; a++) {
            
            if (bus == arraybus[a]) {
                encon = true;
            }
        }

    if (encon == true) {
        cout << "Numero encontrado" << endl;
    }
    else {
        cout << "Numero no encotrado" << endl;
    }

    cout << endl << endl;
    


    //ejercicio 4
        cout << "ESCRITURA DE NOMBRES" << endl;
        string arraynombre[10];

        for (int c = 0; c < 10; c++) {
            cout << "Ingrese el nombre num. " << c + 1 << " : ";
            cin >> arraynombre[c];
            cout << endl;
        }

        cout << endl;
        cout << "Ordenado" << endl;
        for (int c = 0; c < 10; c++) {
            cout << "Nombre num. " << c + 1 << " :" << arraynombre[c] << endl;
        }

        cout << endl;
        cout << "Desordenado" << endl;

        for (int c = 9; c >= 0; c--) {
            cout << "Nombre num. " << c + 1 << " :" << arraynombre[c] << endl;
        }


        cout << endl << endl;

    //ejercicio 5

        cout << "SUMA DE FILAS Y COLUMNAS" << endl;
    
    int matrizsumas[3][3];
    
    for (int columnas = 0; columnas < 3; columnas++) {
        for (int filas = 0; filas < 3; filas++) {
            cout << "Ingrese el numero de la columna " << columnas+1 << " y de la fila " << filas+1 << ": ";
            cin >> matrizsumas[columnas][filas];
        }
    }
    
    for (int columnas = 0; columnas < 3; columnas++) {
        for (int filas = 0; filas < 3; filas++) {
            cout << matrizsumas[columnas][filas] << " ";
            
        }
        cout << endl;
    }

    for (int columnas = 0; columnas < 3; columnas++) {
        int sumafila = 0;
        for (int filas = 0; filas < 3; filas++) {
            sumafila += matrizsumas[columnas][filas];
        }
        cout << "Suma de la fila num. " << columnas+1 << " : " << sumafila << endl;
    }

    for (int filas = 0; filas < 3; filas++) {
        int sumacolum = 0;
        for (int columnas = 0; columnas < 3; columnas++) {
            sumacolum += matrizsumas[columnas][filas];
        }
        cout << "Suma de la columna num. " << filas+1 << " : " << sumacolum << endl;
    }

    cout << endl << endl;

    

}


