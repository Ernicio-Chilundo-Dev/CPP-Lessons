#include <iostream>
#include <deque>//Fila dupla
//PRINCIPAIS DIFERENCAS
// Ele implimenta o iterator
/*Pode ser acessodo em ambos os lados
    pode incluir ou retirar elementos tanto no inicio quanto no final
*/
using namespace std;
void linha(int tam, string txt);
void limpd(deque<int>d);
int main(){
    deque<int>dq1;
    deque<int>dq2(10,5);//10 numerais 5
    deque<int>dq3(dq1);
    deque<int>dq4={1,2,3,4,5,6,7,8,9};

    for(auto it=dq4.begin();it!=dq4.end();it++){
        cout <<*it<< " ";
    }

    return 0;
}

void linha(int tam,string txt){
    cout<<"\n\n-- "<<txt<<" ";
    for(int i=0;i<tam;i++){
        cout << "-";
    }
    cout <<"\n\n";
}

void limpd(deque<int>d){
    for (auto x:d)
    {
        cout << x<< " ";
    }
    
}