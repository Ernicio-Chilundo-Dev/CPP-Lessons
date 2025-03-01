#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    // int vetor[] = {6, 4, 5, 2, 8, 9, 3};
    // int *p;

    // size_t tam = sizeof vetor / 4;
    // p = find(vetor, vetor + tam, 7);
    // map<char, int> mapa;
    // mapa['a'] = 10;
    // mapa['b'] = 33;
    // mapa['c'] = 50;
    // mapa['e'] = 20;
    // mapa['f'] = 5;

    // auto it = mapa.find('c');
    // if (it != mapa.end())
    // {
    //     cout << "Chave encontrada: " << it->second << endl;
    // }
    // else
    // {
    //     cout << "Chave nao encontarada!";
    // }

    // NB: size_t >> e um elemento proprio para armazenar tamanho
    string texto = "As ondas do mar me acalmam";
    size_t enc = texto.find("oceano");
    if(enc!=string::npos){
        cout << "Palavra encontrada: "<< enc<<endl;
    }else{
        cout <<"Palavra nao encontarda!";
    }
 
    return 0;
}