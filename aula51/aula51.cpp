#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // ofstream arquivoS;
    // arquivoS.open("ifstream.txt");
    // arquivoS << "Ernicio Chilundo\n";
    // arquivoS << "Rj Chilundo\n";
    // arquivoS << "Kosmo Chilundo\n";

    // arquivoS.close();

    ifstream arquivoE;
    string linha;
    arquivoE.open("ifstream.txt");
    if (arquivoE.is_open())
    {
        while (getline(arquivoE, linha))
        {
            cout << linha << endl;
        }
        arquivoE.close();
    }
    else
    {
        cout << "Nao foi possivel abrir o arquivo!";
    }
    return 0;
}