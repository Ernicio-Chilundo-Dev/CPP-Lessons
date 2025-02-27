#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main()
{
    const int tam = 3;
    vector<pair<int, string>> prod;
    // pair<int, pair<string,double>> par[tam];

    // par[0].first=58;
    // par[0].second="curso de c++ aula 58 for-range-declaraction";

    // par[1].first=59;
    // par[1].second="curso de c++ aula 59 funcoes lambdas";

    // par[2].first=60;
    // par[2].second="curso de c++ aula 60 pair - dados em pares";

    // par[0]=make_pair(10,make_pair("mouse",10.55));
    // par[1]=make_pair(20,make_pair("tecldo",20.49));
    // par[2]=make_pair(30,make_pair("monitor",338.54));

    prod.push_back(make_pair(10, "mouse"));
    prod.push_back(make_pair(20, "teclado"));
    prod.push_back(make_pair(30, "monitor"));

    for (auto i : prod)
    {
        cout << i.first << " -- " << i.second << endl;
    }

    return 0;
}