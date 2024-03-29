#include <iostream>
#include <vector>
using namespace std;


int main (){
    vector<int> edades;
    vector<int>::iterador it;
    edades.push_back(5);
    edades.insert{edades.begin()+1,10};
    edades.insert{edades.begin()+2,20};
    edades.insert{edades.begin()+3,30};
    cout<<"numero de edades: "<< edades.size() << endl;
    
    for(it=edades.begin(); it<edades.end(); it++){
        cout<< "edades en la posicion it " <<" :"<<*it << endl;

    }

    edades.erase(edades.begin()+2);
    cout<<"numero de edades: "<< edades.size() <<endl;

    for (it= edades.begin();it<edades.end; it++){
        cout<< "edades en la posiciones it"<<" : "<< endl;
    }
}