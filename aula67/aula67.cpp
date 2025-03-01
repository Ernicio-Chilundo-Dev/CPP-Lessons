#include <iostream>
using namespace std;

class Veiculo{
    private:
    const char* nome;
    const char* cor;

    public:

    int velMax;
    int rodas;

    void setNome(const char* no){
        nome=no;
    }

    const char* getNome(){
        return nome;
    }

    void setCor(const char* co){
        cor =co;
    }
};

int main(){

    return 0;
}