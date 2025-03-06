#include <iostream>
#include <stack>
using namespace std;

int main(){

    stack<int>pilha1,pilha2;

    
    pilha2.push(10);
    pilha2.push(20);
    pilha2.push(30);
    pilha2.push(40);
    pilha2.push(50);
    
    pilha2.swap(pilha1);
    cout << "Elementos da pilha: "<< pilha1.size()<<endl;
    while(!pilha1.empty()){
        cout << pilha1.top()<<endl;
        pilha1.pop();
    }

    if(pilha1.empty()){
        cout << "Pilha vazia!"<<endl;
    }else{
        cout << "Pilha contem valores"<<endl;
    }

    cout <<"Elementos da pilha: "<<pilha1.size()<<endl;
    return 0;
}