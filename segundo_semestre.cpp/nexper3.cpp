#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool esCuadradoMagico(const vector<int>& cuadrado) {
    int sum = cuadrado[0] + cuadrado[1] + cuadrado[2];
    for (int i = 0; i < 3; ++i) {
        if (cuadrado[i*3] + cuadrado[i*3 + 1] + cuadrado[i*3 + 2] != sum ||
            cuadrado[i] + cuadrado[i + 3] + cuadrado[i + 6] != sum)
            return false;
    }
    return (cuadrado[0] + cuadrado[4] + cuadrado[8] == sum &&
            cuadrado[2] + cuadrado[4] + cuadrado[6] == sum);
}

int main() {
    vector<int> numeros = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    sort(numeros.begin(), numeros.end());

    do {
        vector<int> cuadrado = {numeros[0], numeros[1], numeros[2],
                                 numeros[3], numeros[4], numeros[5],
                                 numeros[6], numeros[7], numeros[8]};
        if (esCuadradoMagico(cuadrado)) {
            cout << cuadrado[0] << " " << cuadrado[1] << " " << cuadrado[2] << endl;
            cout << cuadrado[3] << " " << cuadrado[4] << " " << cuadrado[5] << endl;
            cout << cuadrado[6] << " " << cuadrado[7] << " " << cuadrado[8] << endl;
            cout << endl;
        }
    } while (next_permutation(numeros.begin(), numeros.end()));

    return 0;
}
