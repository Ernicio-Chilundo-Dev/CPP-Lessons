#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
auto num{10};
cout << "Tipo do num: "<< typeid(num).name()<<endl;
    return 0;
}