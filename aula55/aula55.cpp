#include <iostream>
#include <vector>
#include <map>

using namespace std;
struct Pessoa
{
    string nome;
    int idade;
};

class Veiculo
{
public:
    int tipo;
    string nome;
};
int main()
{
    int vetor[]{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int num{10};
    string nome{"Ernicio"};
    vector<int> valores{1, 2, 3, 4, 5};
    map<string, string> capitais{{"MG, Belo Horizonte"}};

    Pessoa p1{"Ernicio", 23};
    Veiculo v1{1, "Carango"};

    // for (map<string,string>::iterator it = capitais.begin(); it != capitais.end(); it++)
    // {
    //     cout << it->first << "--"<< it->second<< endl;
    // }

    cout << v1.tipo << "-" << v1.nome << endl;
    cout << vetor[3] << endl;
    return 0;
}