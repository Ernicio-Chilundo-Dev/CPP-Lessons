#include <iostream>
#include <string>
using namespace std;

int main()
{
    string txt1("O rato rueo a roupa do rei Roube!");
    string txt2 = "Mr";
    string txt3 = "As ondas do mar me acalmam";

    // FUNCOES DE MODIFICADORAS

    // txt.append(" - e ele foi preso.");
    // txt.pop_back();
    // cout << txt << endl;

    // FUNCOES DE SUBSTITUICAO
    // txt.assign("As ondas do mar me acalmam");
    // cout << txt << endl;

    // txt.replace(23,3,txt2);
    // cout << txt<<endl;

    txt1.swap(txt3);
    cout << txt1 << endl
         << txt3 << endl;

    // FUNCAO DE INSERCAO
    // string txt1("As ondas do mar me acalmam");
    // txt1.append("por isso gosto de ir a praia");
    // txt1.insert(26," - ");
    // cout << txt1 << endl;
    return 0;
}