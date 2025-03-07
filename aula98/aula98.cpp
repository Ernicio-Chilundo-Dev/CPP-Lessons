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
    

    return 0;
}