#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> crearMatriz(int filas, int columnas){
    vector<vector<int>> matriz;
    for(int i=0; i<filas; i++){
        vector<int> fila;
        for(int j=0; j<columnas; j++){
            int valor;
            cout<< "ingrese un valor: "; cin>>valor;
            fila.push_back(valor);
        
        }
        matriz.push_back(fila);    
    }
    return matriz;
}

void mayorMenor(vector<vector<int>> matriz){
    for(size_t i=0; i<matriz.size();i++){
        int mayor = matriz [i][0];
        int menor = matriz [i][0];

        for(size_t j=0; j<matriz[i].size(); j++){
            if(mayor < matriz[i][j]){
                mayor = matriz[i][j];
            }
            if(menor > matriz[i][j]){
                menor = matriz[i][j];
            }
        }
        // TODO: revisar esta salida de respuesta
        cout<<"El mayor de la fila " << i+1 <<":" << mayor << ", " << menor;
    }
}

int main() {
    int filas, columnas;
    vector<vector<int>> matriz;
    cout << "Ingrese el número de filas de la matriz: ";
    cin >> filas;
    cout << "Ingrese el número de columnas de la matriz: ";
    cin >> columnas;
    matriz = crearMatriz(filas, columnas);
    mayorMenor(matriz);
}