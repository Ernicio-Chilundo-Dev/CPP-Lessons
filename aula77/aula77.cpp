#include <iostream>
#include <functional>
using namespace std;

int soma(int n1,int n2){
    return n1 + n2;
}

int main(){
    int n1 =10;
    const int n2 =5;

    auto s1 = bind(soma,n1,n2);
    cout << s1()<<endl;

    return 0;
}