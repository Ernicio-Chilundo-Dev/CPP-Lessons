#include <iostream>
#include "classes.H"
using namespace std;

int main(){
    Moto *v1 = new Moto();
    Carro *v2 = new Carro();
    Tanque *v3 = new Tanque();
    v1->imp();
    v2->imp();
    v3->imp();
    return 0;
}