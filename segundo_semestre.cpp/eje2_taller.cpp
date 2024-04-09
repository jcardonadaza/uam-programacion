#include <iostream>
#include <vector>
using namespace std;


// Función para ingresar una matriz dinámica de enteros
vector<vector<int> > ingresarMatriz(int filas, int columnas) {
    vector<vector<int> > matriz(filas, vector<int>(columnas));
    
    cout << "Ingrese los elementos de la matriz fila por fila:\n";
    for (int i = 0; i < filas; ++i) {
        cout << "Fila " << i + 1 << ": ";
        for (int j = 0; j < columnas; ++j) {
            cin >> matriz[i][j];
        }
    }
    
    return matriz;
}

// Función para calcular la suma de cada fila de la matriz
vector<int> sumaFilas(const vector<vector<int> >& matriz) {
    vector<int> suma(matriz.size(), 0);
    
    for (size_t i = 0; i < matriz.size(); ++i) {
        for (size_t j = 0; j < matriz[i].size(); ++j) {
            suma[i] += matriz[i][j];
        }
    }
    
    return suma;
}

int main() {
    int filas, columnas;
    cout << "Ingrese el número de filas de la matriz: ";
    cin >> filas;
    cout << "Ingrese el número de columnas de la matriz: ";
    cin >> columnas;
    
    // Ingresar la matriz
    vector<vector<int> > matriz = ingresarMatriz(filas, columnas);
    
    // Calcular la suma de cada fila
    vector<int> suma_de_filas = sumaFilas(matriz);
    
    // Mostrar la suma de cada fila
    cout << "La suma de cada fila de la matriz es:\n";
    for (size_t i = 0; i < suma_de_filas.size(); ++i) {
        cout << "Fila " << i + 1 << ": " << suma_de_filas[i] << endl;
    }
    
    return 0;
}

//    1.Inclusión de bibliotecas: Al principio del programa, se incluyen las bibliotecas necesarias:

//<iostream>: Para entrada y salida estándar.
//<vector>: Para trabajar con vectores, que se utilizarán para representar la matriz.

//    2.Declaración de las funciones:

//ingresarMatriz(int filas, int columnas): Esta función se encarga de ingresar los elementos de la matriz. Toma dos parámetros: el número de filas y columnas de la matriz. Utiliza un vector bidimensional para almacenar la matriz y solicita al usuario que ingrese los elementos fila por fila.
//sumaFilas(const vector<vector<int>>& matriz): Esta función calcula la suma de cada fila de la matriz. Toma la matriz como argumento y devuelve un vector que contiene la suma de cada fila.

//    3.Función main():

//Se declaran las variables filas y columnas para almacenar el tamaño de la matriz, que el usuario ingresará.
//Se solicita al usuario que ingrese el número de filas y columnas de la matriz.
//Se llama a la función ingresarMatriz() para que el usuario ingrese los elementos de la matriz.
//Se llama a la función sumaFilas() para calcular la suma de cada fila de la matriz.
//Se muestra la suma de cada fila de la matriz al usuario.

//    4.Función ingresarMatriz() (continuación): Dentro de esta función, se crea una matriz de tamaño filas x columnas utilizando un vector bidimensional. Luego, se solicita al usuario que ingrese los elementos fila por fila, y se almacenan en la matriz.

//    5.Función sumaFilas() (continuación): Dentro de esta función, se inicializa un vector llamado suma con el mismo tamaño que el número de filas de la matriz. Luego, se recorre la matriz y se suma cada elemento de cada fila, almacenando el resultado en el vector suma.




