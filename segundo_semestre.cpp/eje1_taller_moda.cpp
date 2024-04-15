#include <iostream>
#include <vector>

using namespace std;

// Función para calcular la moda de una lista de enteros
int moda(const vector<int>& lista) {
    int max_frecuencia = 0;
    int moda = -1;

    for (size_t i = 0; i < lista.size(); i++) {
        int frecuencia = 1;
        for (size_t j = i + 1; j < lista.size(); j++) {
            if (lista[i] == lista[j]) {
                frecuencia++;
            }
        }

        if (frecuencia > max_frecuencia) {
            max_frecuencia = frecuencia;
            moda = lista[i];
        }
    }

    return moda;
}

int main() {
    int n;
    cout << "Ingrese la cantidad de enteros en la lista: ";
    cin >> n;

    vector<int> lista(n);

    cout << "Ingrese los enteros separados por enter: ";
    for (int i = 0; i < n; ++i) {
        cin >> lista[i];
    }

    // Calcular la moda
    int resultado = moda(lista);

    if (resultado != -1) {
        cout << "La moda de la lista es: " << resultado << endl;
    } else {
        cout << "No hay moda en la lista. Todos los elementos son únicos." << endl;
    }

    return 0;
}