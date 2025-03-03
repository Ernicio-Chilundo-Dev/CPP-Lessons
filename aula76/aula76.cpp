#include <iostream>
#include <typeinfo>
using namespace std;
class Carro{};

int main(){
auto num{10.9};
if(typeid(int).before(typeid(double))){
    cout << "Int vem antes de double!"<<endl;
}else{
    cout << "double vem antes do Int"<<endl;
}
cout << "Tipo do num: "<< typeid(num).name()<<endl;
    return 0;
}