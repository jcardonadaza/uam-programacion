#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arreglo){
    for(size_t i=1; i<arreglo.size(); i++){
        int datoSeleccionado = arreglo[i];
        int j = i - 1;

        while(j >= 0 && arreglo[j] < datoSeleccionado){
            arreglo[j + 1] = arreglo[j];
            j--;
        }
        arreglo[j + 1] = datoSeleccionado;
    }
}

void mostrarArreglo(vector<int> arreglo){
    for(size_t i=0; i<arreglo.size();i++){
        cout<< arreglo[i] <<'\t';
    }
    cout<<endl;
}

int main(){
    vector<int> arreglo = {2,6,7,82,1};
    mostrarArreglo(arreglo);
    insertionSort(arreglo);
    mostrarArreglo(arreglo);
    return 0;
}