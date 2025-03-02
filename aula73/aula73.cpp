#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    // double num;

    // char numero[80];

    // cin >> numero;

    // // num = atof(numero);
    // num = strtod(numero, NULL);

    // cout << num << endl;

    // funcoes de conversao
    // atof atoi atol atoll(c++11);
    // astrtod astrtof astrtol astrtoll;

    // funcoes que geram numeros aleatorios

    // srand(time(NULL));
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << rand() % 100 << endl;
    // }

    // funcoews de gerenciamento de dinamico da memoria
    // calloc malloc
    //  free realloc

    int tam = 10;
    int *vetor;

    vetor = (int *)calloc(tam, sizeof(int));

    vetor = (int *)malloc(sizeof(int));

    srand(time(NULL));
    for (int i = 0; i < tam; i++)
    {
        vetor[i] = rand() % 100;
        cout << vetor[i] << "\n";
    }
    free(vetor);
    return 0;
}
