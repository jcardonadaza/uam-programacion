#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string cadena;
    cout << "Ingrese una cadena: ";
    cin >> cadena;
    
    sort(cadena.begin(), cadena.end());

    do {
        cout << cadena << endl;
    } while (next_permutation(cadena.begin(), cadena.end()));

    return 0;
}
