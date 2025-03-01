#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int vetor[] = {6, 4, 5, 2, 8, 9, 3};
    int *p;

    size_t tam = sizeof vetor / 4;
    p = find(vetor, vetor + tam, 7);
    if (p != vetor + tam)
    {
        cout << "Numeral encontrado: " << *p << endl;
    }
    else
    {
        cout << "Numeral Nao encontrado!";
    }
    return 0;
}