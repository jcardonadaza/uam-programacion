#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// Función para calcular la moda de una lista de enteros
int moda(const std::vector<int>& lista) {
    unordered_map<int, int> contador;
    
    // Contar la frecuencia de cada número en la lista
    for (int num : lista) {
        contador[num]++;
    }
    
    // Encontrar el número con la frecuencia máxima 
    int max_frecuencia = 0;
    int moda = -1;
    for (const auto& par : contador) {
        if (par.second > max_frecuencia) {
            max_frecuencia = par.second;
            moda = par.first;
        }
    }
    
    return moda;
}

int main() {
    int n;
    cout << "Ingrese la cantidad de enteros en la lista: ";
    cin >> n;
    
    vector<int> lista(n);
    
    cout << "Ingrese los enteros separados por espacios: ";
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


//    1.Inclusión de bibliotecas: Al principio del programa, se incluyen tres bibliotecas estándar de C++:

//<iostream>: Para entrada y salida estándar.
//<vector>: Para trabajar con listas dinámicas de elementos.
//<unordered_map>: Para utilizar un mapa no ordenado que asociará los números con sus frecuencias en la lista.

//    2.Declaración de la función moda(): Esta función toma una lista de enteros como argumento y devuelve la moda de esa lista. Dentro de la función:

//Se declara un unordered_map llamado contador que mapeará cada número a su frecuencia en la lista.
//Se itera sobre la lista de enteros y se cuenta la frecuencia de cada número.
//Se encuentra el número con la frecuencia máxima y se devuelve como resultado.

//    3.Función main(): Esta es la función principal del programa. Aquí está el flujo principal de ejecución.

//Se declara una variable n para almacenar la cantidad de enteros que el usuario proporcionará.
//Se solicita al usuario que ingrese la cantidad de enteros en la lista.
//Se crea un vector llamado lista de tamaño n para almacenar los enteros.
//Se solicita al usuario que ingrese los enteros uno por uno, los cuales se almacenan en el vector lista.
//Se llama a la función moda() pasando la lista como argumento.
//Se imprime la moda de la lista o un mensaje indicando que todos los elementos son únicos si no hay moda.

//    4.Función moda() (continuación): Dentro de esta función, se recorre la lista de enteros para contar la frecuencia de cada número utilizando un unordered_map. Luego, se busca el número con la frecuencia máxima y se devuelve como resultado.


