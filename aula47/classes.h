#ifndef CLASSES_H_INCLUDE
#define CLASSES_H_INCLUDE

class Veiculo
{
public:
    int vel;
    int blind;
    int rodas;
    void setTipo(int tp);
    void setVelMax(int vm);
    void setArma(bool ar);
    void imp();

private:
    int tipo;
    int velMax;
    bool arma;
};

void Veiculo::imp()
{
    std::cout << "Tipo do veiculo..: " << tipo << std::endl;
    std::cout << "Velocidade Maxima: " << velMax << std::endl;
    std::cout << "Qtde rodas.......: " << rodas << std::endl;
    std::cout << "Blindagem........: " << blind << std::endl;
    std::cout << "Armamento........: " << arma << std::endl;
    std::cout <<std::endl<< ".............................. "<< std::endl;
}
class Moto : public Veiculo
{
public:
    Moto();
};

void Veiculo::setTipo(int tp)
{
    tipo = tp;
}

void Veiculo::setVelMax(int vm)
{
    velMax = vm;
}

void Veiculo::setArma(bool ar)
{
    arma = ar;
}

Moto::Moto()
{
    vel = 0;
    blind = 0;
    rodas = 2;
    setTipo(1);
    setVelMax(120);
    setArma(false);
}

class Carro:public Veiculo{
    public:
        Carro();
};


Carro::Carro(){
    vel = 0;
    blind = 0;
    rodas = 4;
    setTipo(2);
    setVelMax(180);
    setArma(false);
}

class Tanque:public Veiculo{
    public:
        Tanque();
};


Tanque::Tanque(){
    vel = 0;
    blind = 1;
    rodas = 8;
    setTipo(4);
    setVelMax(200);
    setArma(true);
}

#endif
