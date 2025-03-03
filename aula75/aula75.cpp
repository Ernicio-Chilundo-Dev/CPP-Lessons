#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int main()
{
    // int n = -10;
    // cout << abs(n)<<endl;

    size_t tam;
    vector<int> numeros = {9, 8, 5, 4, 3, 2, 1, 6, 7, 0};

    tam = numeros.size();
    cout << tam << endl;

    int num, dem;
    div_t res;
    num = 10;
    dem = 3;

    res = div(num, dem);
    cout << num << " devidido por " << dem << " = " << res.quot << " e o resto da divisao e " << res.rem << endl;
    return 0;
}