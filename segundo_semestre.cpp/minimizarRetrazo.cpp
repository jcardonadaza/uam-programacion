#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int calcularRecargoTotal(const vector <int>& tiempos, const vector<int>& recargos, const vector<int>& secuencia) {
    int diasDeRetraso = 0;
    int recargoTotal = 0;
    int diasTrascurridos = 0;

    for(int i= 0; i< secuencia.size(); ++i) {
        diasTrascurridos += tiempos[secuencia[i] -1];
        int retraso = diasTrascurridos -i - 1;
        if ( retraso > 0)
        diasDeRetraso = retraso;

    else
        diasDeRetraso = 0;
    recargoTotal += diasDeRetraso * recargos[secuencia[i] -1];
    }
    return recargoTotal;
}

vector<int> encontrarSecuenciaMinima(const vector<int>& tiempos, const vector<int>& recargos){
    vector<int> secuencia(tiempos.size());
    for(int i=0; i < secuencia.size(); ++i) {
        secuencia[i] = i + 1;
    }

    vector<int> secuenciaMinima = secuencia;
    int recargoMinimo = numeric_limits<int>::max();

    do{
        int recargoActual = calcularRecargoTotal(tiempos, recargos, secuencia);
        if (recargoActual <  recargoMinimo){
            recargoMinimo = recargoActual;
            secuenciaMinima = secuencia;
        }
    }while (next_permutation(secuencia.begin(), secuencia.end()));

    return secuenciaMinima;

}

int main() {
    vector<int> tiempos = {3, 1, 2 , 5};
    vector<int> recargos = {4, 1000, 2, 5};

    vector<int> secuenciaMimima = encontrarSecuenciaMinima(tiempos, recargos);
    for(int trabajo : secuenciaMimima){
        cout << trabajo << " ";
    }
    cout<< endl;

    int recargoTotal = calcularRecargoTotal(tiempos, recargos, secuenciaMimima);
    cout<< "recargos total: " << recargoTotal << " pesos" << endl;
}

