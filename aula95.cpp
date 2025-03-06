#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> vt = {1, 3, 4, 5, 6, 3, 4, 5, 2, 9, 0, -7, 10, 7, 13, 8, 6, 2};

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
    return 0;
}