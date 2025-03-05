#include <iostream>
#include <string>
using namespace std;

int main()
{
    string txt("Curso de c++ no canal cfbcursos!");
    txt.capacity();
    txt.resize(10);
    txt.shrink_to_fit();
    cout<< txt<<endl;
    cout << txt.capacity();

    return 0;
}