#include <iostream>
#include <functional>
using namespace std;
class Cfb
{
public:
    int num;
    Cfb(int n) : num(n) {}
    int dobro()
    {
        return num * 2;
    }
};

int soma(int n1, int n2)
{
    return n1 + n2;
}

int main()
{
    // int n1 =10;
    // // const int n2 =5;

    // // auto s1 = bind(soma,n1,n2);
    // // cout << s1()<<endl;
    // auto n2 = cref(n1);
    // n1+=9;
    // cout << n2<<endl;

    Cfb n1{10};
    Cfb n2{5};
    auto dobro2 = mem_fn(&Cfb::dobro);
    cout << dobro2(n2);

    return 0;
}