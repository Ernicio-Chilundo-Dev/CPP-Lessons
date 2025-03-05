#include <iostream>
#include <string>
using namespace std;

int main(){
    // string txt1("Biblioteca string");
    // string txt2("Biblioteca string");

    // size_t encontrado = txt1.find("Biblioteca-5");
    // if(encontrado!=string::npos){
    //     cout << "Encontrado na posicao: "<<encontrado<<endl;
    // }else{
    //     cout << "Nao encontrado";
    // }

    // txt2=txt1.substr(15,10);
    // cout << txt2<<endl;

    // if(txt1.compare(txt2)==0){
    //     cout << "Strings iguais";
    // }else{
    //     cout << "Strings diferentes";
    // }

    string txt1("18"),txt2;
    int ano = 2018, res;

    res = ano - stoi(txt1);
    // cout << res<<endl;

    txt2 = to_string(res);
    cout << txt2<<endl;

    return 0;
}