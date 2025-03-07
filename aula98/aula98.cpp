#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){

    //replace_if = substitui valores da colecao que tendem a determinada condicao
    cout << "replace_if"<<endl;
    vector<int>vt1={1,2,3,4,5,6,7,8,9,0};
    replace_if(vt1.begin(),vt1.end(),[](int i){return i<5;},10);
    for(auto x:vt1){
        cout <<x<< " ";
    }

    cout <<"\n\n";

    //fill = preenche uma colecao com o valor especificado
    cout << "Fill"<<endl;
    vector<int>vt2(10);
    fill(vt2.begin(),vt2.end(),10);
    for (auto x:vt2)
    {
        cout << x<< " ";
    }

    cout << "\n\n";

    //remove = Remove um valor indicado da colecao
    cout << "REMOVE"<<endl;
    vector<int>vt3={2,1,2,3,2,4,2,5,2,6,2,7,2,8,2,9,2};
    int qtde = count(vt3.begin(),vt3.end(),2);
    remove(vt3.begin(),vt3.end(),2);
    vt3.resize(vt3.size()-qtde);
    vt3.shrink_to_fit();
    for(auto x: vt3){
        cout << x<<" ";
    }

    cout <<"\n\n";

    //unique = remove elementos duplicados consecutivos na colecao
    cout << "Unique"<<endl;
    vector<int>vt4={0,1,2,3,3,3,4,5,2,6,7,8,9};
    vector<int>::iterator it;
    it = unique(vt4.begin(),vt4.end());
    vt4.resize(distance(vt4.begin(),it));
    for(auto x:vt4){
        cout<<x<<" ";
    }

    cout << "\n\n";

    

    

    return 0;
}