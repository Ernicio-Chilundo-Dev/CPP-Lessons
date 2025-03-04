#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char * txt1;
    char txt2[]="Ernicio";
    char pesquisa = 'B';

    txt1 = (char*)memchr(txt2,pesquisa,strlen(txt2));
    if(txt1!=NULL){
        cout <<"Letra: "<<pesquisa <<" encontrada na posicao: "<<txt1 - txt2+1<<endl;
    }else{
        cout << "Letra: "<<pesquisa<< " nso encontrada";
    }
    return 0;
}