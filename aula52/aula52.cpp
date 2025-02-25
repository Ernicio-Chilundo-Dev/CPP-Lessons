#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;
int main(){
    fstream arquivo;
    arquivo.open("fstream.txt",ios::out|ios::app);
    char ops = 's';
    string nome,linha;

    while ((ops=='s')or(ops=='S'))
    {
        cout << "Digite um nome: ";
        cin >> nome;
        arquivo<<nome<<endl;
        cout << "Deseja digitar outro nome?[s/n]: ";
        cin >> ops;
        system("cls");
    }
    arquivo.close();

    arquivo.open("fstream.txt",ios::in);
    cout << "Nomes digitados: "<<endl;
    if(arquivo.is_open()){
        while (getline(arquivo,linha))
        {
            cout << linha << endl;
        }
        
    }else{
        cout << "Nao foi possivel abrir o arquivo!";
    }
    
    return 0;
}