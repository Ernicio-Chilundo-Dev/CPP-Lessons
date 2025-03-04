#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char txt1[] = "ERNICIO, jermias - chilundo";
    char * c;
    c= strtok(txt1,",-");
    while (c!= NULL)
    {
        cout << c;
        c= strtok(NULL,",-");
    }
    
    // char pesquisa = 'I';
    // txt2 = strchr(txt1, pesquisa);

    // cout << "Posicao: " << txt1 - txt2+1;

    // txt1 = (char*)memchr(txt2,pesquisa,strlen(txt2));
    // if(txt1!=NULL){
    //     cout <<"Letra: "<<pesquisa <<" encontrada na posicao: "<<txt1 - txt2+1<<endl;
    // }else{
    //     cout << "Letra: "<<pesquisa<< " nao encontrada";
    // }
    return 0;
}