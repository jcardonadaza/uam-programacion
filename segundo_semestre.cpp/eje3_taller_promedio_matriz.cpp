#include <iostream>
#include <vector>
using namespace std;

// Función para ingresar una matriz dinámica de números
vector<vector<double> > ingresarMatriz(int filas, int columnas) {
    vector<vector<double> > matriz(filas, vector<double>(columnas));
    
    cout << "Ingrese los elementos de la matriz fila por fila:\n";
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << "Valor de la fila " << i + 1 << " columna "<< j + 1 << ": ";
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
        cout << "Promedio columna " << j + 1 << ": " << promedio_de_columnas[j] << endl;
    }
    
    return 0;
}
