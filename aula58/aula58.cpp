// for-range-declaraction
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // int x[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    // vector<int> n{10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    const char *nome = "Ernicio";
    for (int i = 0; i < sizeof(nome); i++)
    {
        cout << nome[i] << endl;
    }

    // for (int i : n)
    // {
    //     cout << i << endl;
    // }
    return 0;
}