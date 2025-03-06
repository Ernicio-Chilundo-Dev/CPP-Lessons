#include <iostream>
#include <stack>
using namespace std;

int main(){

    stack<int>pilha1,pilha2;

    pilha1.push(10);
    pilha1.push(20);
    pilha1.push(30);
    pilha1.push(40);
    pilha1.push(50);

    while(!pilha1.empty()){
        cout << pilha1.top()<<endl;
        pilha1.pop();
    }

    if(pilha1.empty()){
        cout << "Pilha vazia!";
    }else{
        cout << "Pilha contem valores";
    }
    return 0;
}