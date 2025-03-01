#include <iostream>
using namespace std;

class Veiculo
{
private:
    int velMax;
    int potencia;

public:
    int rodas;
    const char *nome;

protected:
    int portas;
    const char *cor;
};

class Carro : public Veiculo
{
public:
    Carro()
    {
        // velMax = 180;
        // potencia = 80;
        rodas = 4;
        nome = "Carro";
        portas = 4;
        cor = "Azul";

        // cout <<velmax<<endl;
        // cout <<potencia<<endl;
        cout << rodas << endl;
        cout << nome << endl;
        cout << portas << endl;
        cout << cor << endl;
    }
};

class Moto
{
public:
    Carro c1;
    Moto()
    {
        // c1.velMax=250;
        // c1.potencia=140;
        c1.rodas = 2;
        c1.nome = "Moto";
        // c1.portas = 0;
        // c1.cor="Preto";

        // cout << c1.velMax<<endl;
        // cout<< c1.potencia<<endl;
        cout << c1.rodas << endl;
        cout << c1.nome << endl;
        // cout << c1.portas<<endl;
        // cout << c1.cor<<endl;
    }
};

int main()
{
    Carro v1;
    cout << endl
         << endl;
    Moto v2;
    return 0;
}