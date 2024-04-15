#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> arreglo = {3, 1, 2, 6, 7};
    sort(arreglo.begin(), arreglo.end());

    do {
        for (int num : arreglo) {
            cout << num << " ";
        }
        cout << endl;
    } while (next_permutation(arreglo.begin(), arreglo.end()));

    return 0;
}
