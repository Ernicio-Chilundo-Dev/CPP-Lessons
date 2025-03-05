#include <iostream>
#include <array>
using namespace std;

int main(){
    array<int,10>vt={2,3,4,5,1,6,8,7,0,9};
    // for(auto it =vt.rbegin();it!=vt.rend(); it++){
    //     cout << *it<<endl;
    // }

    // cout << vt.size()<<endl;
    // cout << vt.max_size()<<endl;

    // if(vt.empty()){
    //     cout <<"Array Vazia!";
    // }else{
    //     cout << "Array nao esta vazia";
    // }

    array<int,10>cfb;
    cfb.fill(2);

    vt.swap(cfb);

    for(auto x:cfb){
        cout << x<< " - ";
    }

    cout <<endl;

    for(auto x:vt){
        cout<<x<<" - ";
    }
    return 0;
} 