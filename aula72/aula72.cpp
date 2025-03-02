#include <iostream>
using namespace std;

int main(){

    // char n,s;

    // n=cin.get();
    // cin.ignore();
    // s=cin.get();

    // cout << n << " - " << s<<endl;

    char nome[80];
    cin.get(nome,80);

    cout <<nome<<" = " << cin.gcount();
    return 0;
}