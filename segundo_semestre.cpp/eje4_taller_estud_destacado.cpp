#include <iostream>
#include <vector>

using namespace std;

// Función para ingresar una matriz dinámica de notas de estudiantes
vector<vector<double> > ingresarNotas(int numEstudiantes, int numNotas) {
    vector<vector<double> > notas(numEstudiantes, vector<double>(numNotas));
    
    cout << "Ingrese las notas de cada estudiante:\n";
    for (int i = 0; i < numEstudiantes; ++i) {
        cout << "Estudiante " << i + 1 << ":\n";
        for (int j = 0; j < numNotas; ++j) {
            cout << "Nota " << j + 1 << ": ";
            cin >> notas[i][j];
        }
    }

    return notas;
}

// Función para calcular el promedio de un estudiante
double calcularPromedio(const vector<double>& notas) {
    double suma = 0.0;
    for (double nota : notas) {
        suma += nota;
    }

    return suma / notas.size();
}

// Función para encontrar el estudiante con el promedio más alto
int estudianteDestacado(const vector<vector<double> >& notas) {
    int numEstudiantes = notas.size();
    double maxPromedio = 0.0;
    double promedio = 0.0;
    int indiceEstudiante = -1;
    
    for (int i = 0; i < numEstudiantes; ++i) {
        promedio = calcularPromedio(notas[i]);
        if (promedio > maxPromedio) {
            cout << promedio <<endl;
            maxPromedio = promedio;
            indiceEstudiante = i;
        }
        // cout << "Promedio máximo" << maxPromedio <<endl;
    }
    

    return indiceEstudiante;
}


int main() {
    int numEstudiantes, numNotas;
    cout << "Ingrese el número de estudiantes: ";
    cin >> numEstudiantes;
    cout << "Ingrese el número de notas por estudiante: ";
    cin >> numNotas;
    
    // Ingresar las notas de los estudiantes
    vector<vector<double> > notas = ingresarNotas(numEstudiantes, numNotas);
    
    // Encontrar el estudiante con el promedio más alto
    int indiceEstudiante = estudianteDestacado(notas);
    
    // Mostrar el estudiante con el promedio más alto
    if (indiceEstudiante != -1) {
        cout << "El estudiante destacado es el número: " << indiceEstudiante + 1 <<endl;
    } else {
        cout << "No hay estudiantes registrados." << endl;
    }
    
    return 0;
}


