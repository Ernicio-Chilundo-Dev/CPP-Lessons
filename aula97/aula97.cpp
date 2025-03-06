#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int>vt1={1,2,3,4,5,6,7,8,9,0};
    vector<int>vt2={1,2,3,4,5,6,7,8,9,0};
    vector<int>vt3={1,2,3,4,5,6,7,8,9,0};
    vector<int>vt4={2,5,8};
    vector<int>vt5={10,11,12};

    //equal = verfica se os elementos de uma uma colecao sao iguais aos de outra
    cout <<"Equal"<<endl;
    if(equal(vt1.begin(),vt1.end(),vt2.begin())){
        cout <<"Colecao igual!"<<endl;
    }else{
        cout << "Colecao diferente!"<<endl;
    }

    
    return 0;
}