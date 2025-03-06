#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> vt = {10, 30, 4, 5, 6, 3, 4, 5, 2, 9, 0, -7, 10, 7, 13, 8, 6, 2};

    for (auto x : vt)
    {
        cout << x << endl;
    }

    // all_of retorna true se todos os elementos retornarem true na colecao
    if (all_of(vt.begin(), vt.end(), [](int i)
               { return i < 50; }))
    {
        cout << "Todos os elementos sao menores que 50" << endl;
    }
    else
    {
        cout << "Tem pelo menos dois ou mais numeros maiores que 50" << endl;
    }
    cout << endl;

    // any_of retorna true se pelo menos um elemento da colecao retornar true
    if (any_of(vt.begin(), vt.end(), [](int i)
               { return i > 12; }))
    {
        cout << "Existe um ou mais elementos  maiores que 12!" << endl;
    }
    else
    {
        cout << "Todos os elementos sao menores ou iguais que 12!" << endl;
    }

    cout << endl;

    // none_of retorna false se pelo menos um elemento da colecao for false
    if (none_of(vt.begin(), vt.end(), [](int i)
                { return i < 0; }))
    {
        cout << "Todos os elementos sao positivos!" << endl;
    }
    else
    {
        cout << "Existe um negativo!" << endl;
    }

    // for_each aplica uma funcao a todos os elementos da colecao
    for_each(vt.begin(), vt.end(), [](int i)
             { cout << i * 2 << " "; });

    cout << endl;
    // find procura elemento e retorna um iterator como resultado
    auto it = find(vt.begin(), vt.end(), 13);
    cout << *it << endl;

    cout << endl;

    // find_if procura um elemento que atenda uma determina condicao e retorna o iterator com o resultado
    auto it2 = find_if(vt.begin(), vt.end(), [](int i)
                       { return ((i % 2) == 1); });

    cout << "Primeiro numero impar: " << *it2 << endl<<endl;

    // finf_if_not procura um elemento que nao atenda uma determinada condicao e returna o iterator
    auto it3 = find_if_not(vt.begin(),vt.end(),[](int i){return ((i%2)==1);});
    cout << "Primeiro elemento par: "<<*it3<<endl;

    // Quantidade de um determinado elemento na colecao
    cout << "Quantidade do numeral 2: "<<count(vt.begin(),vt.end(),2)<<endl;

    //count_if quandidade de um determinado elemento na colecao, que atende uma condicao
    cout << "Quandidade de pares: "<<count_if(vt.begin(),vt.end(),[](int i){return ((i%2)==0);});


    return 0;
}