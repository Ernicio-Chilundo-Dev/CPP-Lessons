#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vct = {2, 4, 5, 6, 7, 8, 9, 0, 1, 3};

    for (auto it = vct.begin(); it != vct.end(); it++)
    {
        cout << *it << " - ";
    }

    cout << endl;

    vct.resize(5);
    for (auto x : vct)
    {
        cout << x << " - ";
    }

    return 0;
}