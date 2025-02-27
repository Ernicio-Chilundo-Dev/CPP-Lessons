#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // int x1, x2, x3, x4;
    // x1 = 10;
    // x2 = 5;
    // x3 = 2;
    // x4 = 12;

    // auto soma = [=]() -> int
    // {
    //     return x1 + x2 + x3 + x4;
    // };

    auto soma = [](vector<int> n) -> int
    {
        auto s = 0;
        for (int x : n)
        {
            s += x;
        }
        return s;
    };

    cout << soma({0, 9, 8, 7, 6, 5, 4, 3, 2, 1}) << endl;
    return 0;
}