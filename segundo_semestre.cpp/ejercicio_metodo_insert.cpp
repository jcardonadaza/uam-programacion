#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int> vectorDinamico;
    // vectorDinamico.resize(10);

    while (true)
    {
        cout << "Vector actual: [ ";
        for (const auto & elemento : vectorDinamico)
        {
            cout << elemento << " ";
        }

        int valor, posiciones;
        cout << "] - Ingrese un valor -1 para salir: ";
        cin >> valor;

        if (valor == -1)
        {
            break;
        }

        cout << "Ingrese la posición donde desea insertar el valor: ";
        cin >> posiciones;

        if (posiciones < 0)
        {
            cout << "Posición no válida. Debe estar en el rango [0, " << vectorDinamico.size() << "]." << endl;
            continue;
        }

        if (vectorDinamico.size() < posiciones)
        {
            vectorDinamico.resize(posiciones);
        }

        vectorDinamico.insert(vectorDinamico.begin() + posiciones, valor);

        cout << "Valor insertado en la posición " << posiciones << "." << endl;
    }

    cout << "Saliendo del programa. Vector final: [ ";
    for (const auto & elemento : vectorDinamico)
    {
        cout << elemento << " ";
    }
    cout << "]" << endl;

    return 0;
}
