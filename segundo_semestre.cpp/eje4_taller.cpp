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
    int indiceEstudiante = -1;
    
    for (int i = 0; i < numEstudiantes; ++i) {
        double promedio = calcularPromedio(notas[i]);
        if (promedio > maxPromedio) {
            maxPromedio = promedio;
            indiceEstudiante = i;
        }
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
        cout << "El estudiante destacado es el número " << indiceEstudiante + 1 << endl;
    } else {
        cout << "No hay estudiantes registrados." << endl;
    }
    
    return 0;
}


//    1.Inclusión de bibliotecas y declaración de using namespace std;: Al principio del programa, se incluyen las bibliotecas necesarias, como <iostream> y <vector>. Además, se declara using namespace std;, lo que permite utilizar directamente los objetos y funciones de la biblioteca estándar sin necesidad de escribir std:: delante de ellos.

//    2.Declaración de las funciones:

//ingresarNotas(int numEstudiantes, int numNotas): Esta función permite al usuario ingresar las notas de cada estudiante. Se utiliza un vector bidimensional para almacenar las notas, donde cada fila representa un estudiante y cada columna representa una nota.
//calcularPromedio(const vector<double>& notas): Esta función calcula el promedio de un estudiante. Toma como argumento un vector que contiene las notas de un estudiante y devuelve el promedio de esas notas.
//estudianteDestacado(const vector<vector<double>>& notas): Esta función encuentra al estudiante con el promedio más alto. Toma como argumento la matriz de notas y devuelve el índice del estudiante con el promedio más alto.
//    3.Función main():

//Se declaran las variables numEstudiantes y numNotas para almacenar el número de estudiantes y el número de notas por estudiante, respectivamente.
//Se solicita al usuario que ingrese el número de estudiantes y el número de notas por estudiante.
//Se llama a la función ingresarNotas() para que el usuario ingrese las notas de cada estudiante.
//Se llama a la función estudianteDestacado() para encontrar al estudiante con el promedio más alto.
//Finalmente, se muestra al usuario el número del estudiante destacado.
//Funciones adicionales:

//    4.calcularPromedio(): Dentro de esta función, se calcula el promedio de un estudiante sumando todas sus notas y dividiendo por el número total de notas.
//    5.Función estudianteDestacado(): Dentro de esta función, se inicializa el promedio máximo a 0 y el índice del estudiante destacado a -1. Luego, se itera sobre todas las filas de la matriz de notas, calculando el promedio de cada estudiante. Si el promedio de un estudiante es mayor que el promedio máximo encontrado hasta el momento, se actualiza el promedio máximo y se guarda el índice del estudiante destacado.
