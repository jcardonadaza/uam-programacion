#include <iostream>
#include <vector>
using namespace std;

int main (){
    vector<int>arreglo = {2,6,1,4,5,7};

    
    arreglo.erase(arreglo.begin()+3); //{2, 6, 1, 5, 7}

    
    arreglo.erase(arreglo.begin(), arreglo.begin() + 2); // {1, 5, 7}

    return 0;
}