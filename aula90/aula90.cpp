#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> st1 = {4, 5, 6, 7, 8, 2, 3, 9, 0};

    for (auto x : st1)
    {
        cout << x << " -> ";
    }

    cout << endl;
    set<int> set2 = {3, 2, 1, 0, 5, 6, 7, 8, 9};

    if (set2.count(22) != 0)
    {
        cout << "Esta no container!";
    }
    else
    {
        cout << "Nao esta no container!";
    }

    //LOWER_BOUND|UPPER_BOUND
    return 0;
}
