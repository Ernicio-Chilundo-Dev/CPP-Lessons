#include <iostream>
#include <locale.h>
using namespace std;

int main()
{

    setlocale(LC_ALL, "portuguese");
    cout << "É possivél comer uma maçă";
    return 0;
}