#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> prod;
    map<int, string>::iterator itmap;

    prod.insert(pair<int, string>(0, "Mouse"));
    prod.insert(pair<int, string>(1, "Teclado"));
    prod.insert(pair<int, string>(2, "Monitor"));
    prod.insert(pair<int, string>(3, "Cx.som"));
    prod.insert(pair<int, string>(4, "Microfone"));
    prod.insert(pair<int, string>(5, "Gabinete"));
    prod.insert(pair<int, string>(6, "Camera"));

    // prod.erase(0);
    prod.erase(prod.begin(),prod.find(5));
    // prod.clear();

    // itmap = prod.find(6);
    // if (itmap == prod.end())
    // {
    //     cout << "Produto nao encontrado!" << endl;
    // }
    // else
    // {
    //     cout << "Produto em estoque!" << endl;
    //     cout << "Codigo: " << itmap->first<< " - Produto: " << itmap->second << endl;
    // }
        for (auto i : prod)
        {
            cout <<i .first << " - " << i.second << endl;
        }
        return 0;
}