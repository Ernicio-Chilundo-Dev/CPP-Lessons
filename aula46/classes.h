#ifndef CLASSES_H_INCLUDE
#define CLASSES_H_INCLUDE

class Veiculo
{
public:
    int vel;
    int tipo;
    Veiculo(int tp);
    int getVelMax();
    bool getLigado();
    void setLigado(int l);

private:
    void setVelMax(int vm);
    std::string nome;
    int velMax;
    bool ligado;
};

bool Veiculo::getLigado()
{
    return ligado;
}

void Veiculo::setLigado(int l)
{
    if (l == 1)
    {
        ligado = true;
    }
    else if (l == 0)
    {
        ligado = false;
    }
}

void Veiculo::setVelMax(int vm)
{
    velMax = vm;
}
int Veiculo::getVelMax()
{
    return velMax;
}

Veiculo::Veiculo(int tp)
{
    tipo = tp;
    if (tipo == 1)
    {
        nome = "Carro";
        setVelMax(200);
    }
    else if (tipo == 2)
    {
        nome = "Aviao";
        setVelMax(800);
    }
    else if (tipo == 3)
    {
        nome = "Navio";
        setVelMax(120);
    }

    setLigado(0);
}
#endif