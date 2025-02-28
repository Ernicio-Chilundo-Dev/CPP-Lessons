#include <iostream>
#include <memory>
using namespace std;

class Carro
{
private:
    int velMax;

public:
    int potencia;
    const char *nome;

    int getVelMax()
    {
        return this->velMax;
    }
    Carro(const char *n, int p) : nome(n), potencia(p)
    { // lista de inicializacao
        if (p < 100)
        {
            this->velMax = 120;
        }
        else if (p < 200)
        {
            this->velMax = 220;
        }
        else
        {
            this->velMax = 350;
        }
    }
};

int main()
{
    unique_ptr<Carro> c1(new Carro("Corolla", 229));
    cout << c1->nome << " - " << c1->potencia << " - " << c1->getVelMax() << endl;

    Carro c2{"Izuzu", 177};
    cout << c2.nome << " - " << c2.potencia << " = " << c2.getVelMax() << endl;
    return 0;
}