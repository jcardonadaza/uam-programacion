#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Función para calcular la mediana de un vector
double calcularMediana(vector<int>& fila) {
    int n = fila.size();
    // Ordenar la fila
    sort(fila.begin(), fila.end());

    // Calcular la mediana
    if (n % 2 == 0) {
        // Si hay un número par de elementos, tomar la media de los dos valores centrales
        return (static_cast<double>(fila[n / 2 - 1]) + static_cast<double>(fila[n / 2])) / 2.0;
    } else {
        // Si hay un número impar de elementos, devolver el valor central
        return static_cast<double>(fila[n / 2]);
    }
}

// Función para calcular la mediana de cada fila en una matriz dinámica
vector<double> medianaFilas(const vector<vector<int> >& matriz) {
    vector<double> medianas;
    for (const auto& fila : matriz) {
        medianas.push_back(calcularMediana(const_cast<vector<int> & >(fila)));
    }
    return medianas;
}

int main() {
    // Ejemplo de matriz dinámica
    vector<vector<int > > matriz = {{1, 5, 3}, {3, 2, 6}, {7, 8, 9}};

    // Calcular la mediana de cada fila
    vector<double> medianas = medianaFilas(matriz);

    // Mostrar las medianas de cada fila
    cout << "Las medianas de cada fila son:\n";
    for (size_t i = 0; i < medianas.size(); ++i) {
        cout << "Fila " << i + 1 << ": " << medianas[i] << endl;
    }

    return 0;
}
