#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int>vt1={1,2,3,4,5,6,7,8,9,0};
    vector<int>vt2={1,2,3,4,5,6,7,8,9,0};
    vector<int>vt3={1,2,3,4,5,6,7,8,9,0};
    vector<int>vt4={2,5,8};
    vector<int>vt5={10,11,12};
    vector<int>::iterator it;

    //equal = verfica se os elementos de uma uma colecao sao iguais aos de outra
    cout <<"Equal"<<endl;
    if(equal(vt1.begin(),vt1.end(),vt2.begin())){
        cout <<"Colecoes iguais!"<<endl;
    }else{
        cout << "Colecoes diferentes!"<<endl;
    }
    cout << endl;

    //Search = pesquisa se uma colecao esta em outra
    it = search(vt1.begin(),vt1.end(),vt4.begin(),vt4.end());
    if(it!=vt1.end()){
        cout << "Colecao encontrada na posicao: "<< it-vt1.begin()<<endl;
    }else{
        cout << "Colecao nao encontrada"<<endl;
    }

    cout<<endl;

    //copy = copia elementos de uma colecao em outra mas nao cria novas posicoes
    cout <<"COPY"<<endl;
    copy(vt5.begin(),vt5.end(),vt3.begin());
    for(auto x:vt3){
        cout << x<<endl;
    }

    cout <<endl;

    //copy_if = copia elementos de uma colecao em outra que atenda uma condicao, mas nao cria novas posicoes
    cout <<"COPY_IF"<<endl;
    copy_if(vt5.begin(),vt5.end(),vt1.begin(),[](int i){return (i%2)==0;}); // copia somente os pares
    for(auto x:vt1){
        cout <<x<< " ";
    }

    cout<<"\n\n";

    //move = Move elementos de uma colecao para a outra
    cout <<"Move"<<endl;
    vt4=move(vt1);
    for(auto x:vt4){
        cout<<x<<" ";
    }
    cout<<"\n\n";

    for(auto x:vt1){
        cout<<x<<" ";
    }

    cout <<endl;

    //swap = Swap troca os elementos de duas colecoes
    swap(vt2,vt3);

    //transform = alpica uma fincao que altera os valores de colecao
    cout << "TRANSFORM"<<endl;
    transform(vt5.begin(),vt5.end(),vt5.begin(),[](int i){return i * 100;});

    for(auto x:vt5){
        cout << x<<" ";
    }

    cout << "\n\n";

    //replace = substitui um determinado valor de uma colecao por outra
    replace(vt2.begin(),vt2.end(),5,500);//substitui todos valoes 5 por 500

    return 0;
}