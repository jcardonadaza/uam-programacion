#include <iostream>
#include <vector>
using namespace std;

// Función para ingresar una matriz dinámica de números
vector<vector<double> > ingresarMatriz(int filas, int columnas) {
    vector<vector<double> > matriz(filas, vector<double>(columnas));
    
    cout << "Ingrese los elementos de la matriz fila por fila:\n";
    for (int i = 0; i < filas; ++i) {
        cout << "Fila " << i + 1 << ": ";
        for (int j = 0; j < columnas; ++j) {
            cin >> matriz[i][j];
        }
    }
    
    return matriz;
}

// Función para calcular el promedio de cada columna de la matriz
vector<double> promedioColumnas(const vector<vector<double> >& matriz) {
    int filas = matriz.size();
    int columnas = matriz[0].size();
    
    vector<double> promedio(columnas, 0.0);
    
    for (int j = 0; j < columnas; ++j) {
        double suma = 0.0;
        for (int i = 0; i < filas; ++i) {
            suma += matriz[i][j];
        }
        promedio[j] = suma / filas;
    }
    
    return promedio;
}

int main() {
    int filas, columnas;
    cout << "Ingrese el número de filas de la matriz: ";
    cin >> filas;
    cout << "Ingrese el número de columnas de la matriz: ";
    cin >> columnas;
    
    // Ingresar la matriz
    vector<vector<double> > matriz = ingresarMatriz(filas, columnas);
    
    // Calcular el promedio de cada columna
    vector<double> promedio_de_columnas = promedioColumnas(matriz);
    
    // Mostrar el promedio de cada columna
    cout << "El promedio de cada columna de la matriz es:\n";
    for (size_t j = 0; j < promedio_de_columnas.size(); ++j) {
        cout << "Columna " << j + 1 << ": " << promedio_de_columnas[j] << endl;
    }
    
    return 0;
}


//    1.Inclusión de bibliotecas: Al principio del programa, se incluyen las bibliotecas necesarias:

//<iostream>: Para entrada y salida estándar.
//<vector>: Para trabajar con vectores, que se utilizarán para representar la matriz.
//    2.Declaración de las funciones:

//ingresarMatriz(int filas, int columnas): Esta función se encarga de ingresar los elementos de la matriz. Toma dos parámetros: el número de filas y columnas de la matriz. Utiliza un vector bidimensional para almacenar la matriz y solicita al usuario que ingrese los elementos fila por fila.
//promedioColumnas(const std::vector<std::vector<double>>& matriz): Esta función calcula el promedio de cada columna de la matriz. Toma la matriz como argumento y devuelve un vector que contiene el promedio de cada columna.
//    3.Función main():

//Se declaran las variables filas y columnas para almacenar el tamaño de la matriz, que el usuario ingresará.
//Se solicita al usuario que ingrese el número de filas y columnas de la matriz.
//Se llama a la función ingresarMatriz() para que el usuario ingrese los elementos de la matriz.
//Se llama a la función promedioColumnas() para calcular el promedio de cada columna de la matriz.
//Se muestra el promedio de cada columna de la matriz al usuario.
//    4.Función ingresarMatriz() (continuación): Dentro de esta función, se crea una matriz de tamaño filas x columnas utilizando un vector bidimensional. Luego, se solicita al usuario que ingrese los elementos fila por fila, y se almacenan en la matriz.

//    5.Función promedioColumnas() (continuación): Dentro de esta función, se inicializa un vector llamado promedio con el mismo tamaño que el número de columnas de la matriz. Luego, se recorre la matriz columna por columna y se calcula la suma de los elementos de cada columna. Posteriormente, se divide la suma de cada columna por el número de filas para obtener el promedio de cada columna.