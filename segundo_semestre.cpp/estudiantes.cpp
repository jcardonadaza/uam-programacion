#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Estudiante {
    string nombre;
    vector<float> notas;
    float promedio;
};

void calcularPromedio(Estudiante &estudiante){
    float suma = 0;
    for(int i = 0; i < estudiante.notas.size(); i++){
        suma += estudiante.notas[i];
    }
    estudiante.promedio = suma / estudiante.notas.size();
}

void insertionSort(vector<Estudiante> &estudiantes){
    for(size_t i=1; i<estudiantes.size(); i++){
        Estudiante estudianteSeleccionado = estudiantes[i];
        int j = i - 1;

        while(j >= 0 && estudiantes[j].promedio < estudianteSeleccionado.promedio){
            estudiantes[j + 1] = estudiantes[j];
            j--;
        }
        estudiantes[j + 1] = estudianteSeleccionado;
    }
}

void mostrarEstudiantes(vector<Estudiante> estudiantes){
    for(size_t i=0; i<estudiantes.size();i++){
        cout<< "Nombre: " << estudiantes[i].nombre << ", Promedio: " << estudiantes[i].promedio <<'\n';
    }
    cout<<endl;
}

int main(){
    vector<Estudiante> estudiantes;
    for(int i = 0; i < 5; i++){
        Estudiante estudiante;
        cout << "Ingrese el nombre del estudiante: ";
        cin >> estudiante.nombre;
        for(int j = 0; j < 5; j++){
            float nota;
            cout << "Ingrese la nota " << j+1 << ": ";
            cin >> nota;
            // validar numero de nota
            // validar que sea un numero
            if(cin.fail()){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Debe ingresar un número válido" << endl;
                j--;
                continue;
            }
            if(nota <=5){
                estudiante.notas.push_back(nota);
            }else{
                cout << "Nota no válida" << endl;
                j--;
            }
            
        }
        calcularPromedio(estudiante);
        estudiantes.push_back(estudiante);
    }
    mostrarEstudiantes(estudiantes);
    insertionSort(estudiantes);
    mostrarEstudiantes(estudiantes);
    return 0;
}