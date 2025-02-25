#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<string> produtos = {"mouse", "monitor", "teclado", "gabinete", "cx.som"};
    vector<string>::iterator it;
    for (it = produtos.begin(); it != produtos.end(); it++)
    {
        cout << *it << endl;
    }
    // advance
    // next
    // prev
    // advance(it,2);
    // cout << *next(it,2) << endl;
    // cout << *prev(it,1) << endl;
    return 0;
}