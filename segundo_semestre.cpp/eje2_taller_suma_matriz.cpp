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


