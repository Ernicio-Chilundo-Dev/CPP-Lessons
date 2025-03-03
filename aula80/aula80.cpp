#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;

int main()
{
    minutes m(1);
    seconds s = m;

    cout << s.count()<<endl;



    return 0;
}