#include <iostream>
#include <memory>
using namespace std;

class Carro
{
public:
    int vel = 0;
    int getVel()
    {
        return vel;
    }
    void setVel(int v)
    {
        this->vel = v;
    }
};

int main()
{
    // int *pnum = new int();

    // string *str = new string("Ernicio jermias chilundo");
    // unique_ptr<string>str(new string("Ernicio jermias chilundo!"));
    // cout << *str << " - tamanho:  " << str->size() << endl;

    // Carro *c1 = new Carro();
    unique_ptr<Carro> c1(new Carro);
    unique_ptr<Carro> c2(new Carro);
    c1->setVel(10);
    c2->setVel(5);

    cout << "Velocidade c1: " << c1->getVel() << endl;
    cout << "Velocidade c2: " << c2->getVel() << endl;
    // delete c1;

    return 0;
}