#include <iostream>
#include <vector>
using namespace std;

int main (){
    vector<int> arreglo(3); 
    arreglo.insert(arreglo.begin(), 5); 
    arreglo.insert(arreglo.begin()+1, 10); 
    arreglo.insert(arreglo.end(), 20); 
   
    for(size_t i=0; i<arreglo.size(); ++i) {
        cout << arreglo[i] << '\t';

    }
    return 0;
}

        
