#include <iostream>
#include <vector>

using namespace std;

float calcular_promedio (const vector<int>& x){
    float p=0;
    for(size_t i=0; i<x.size(); i++){
        p+= x[i];
    }
    return p/x.size();
}

void eliminar_elemento (vector<int>& x){
    if (!x.empty()) {
        x.pop_back();
    }
}

void mostrar_arreglo(const vector<int>& x){
    for(size_t i=0; i<x.size();i++){
        cout<<x[i] << " ";
    }
}

int main(){
    vector<int> x;
    int y;
    for(int i=0; i<4; i++){
        cout<<"un #";
        cin>>y;
        x.push_back(y);
    }
    float p=calcular_promedio(x);
    cout<<"el promedio es"<<endl<<p<<'\t';
    mostrar_arreglo(x);
    return 0;
}