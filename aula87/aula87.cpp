#include <iostream>
#include <array>
using namespace std;

int main(){
    array<int,10>vt={2,3,4,5,1,6,8,7,0,9};
    for(auto x:vt){
        cout << x<<endl;
    }
    return 0;
}