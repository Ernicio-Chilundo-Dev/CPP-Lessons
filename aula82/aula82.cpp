#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char txt1[]="Curso de programacao - c++";
    char txt2[]="Curso de programacao - c++";
    int res;
    res = memcmp(txt1,txt2,sizeof(txt1));
    // memcpy(pessoa1.nome,meunome,strlen(meunome)+1);
    // memcpy(pessoa2.nome,pessoa1.nome,sizeof(pessoa1.nome)+1);
    // cout << pessoa2.nome<<endl;

    if(res ==0){
        cout << "Iguais";
    }else{
        cout<< "Diferentes";
    }
    return 0;
}