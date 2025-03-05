#include <iostream>
#include <list>
using namespace std;

int main(){

    list<int>list1={3,5,7,8,9,0,4,3,5,6,0};

    list1.sort();
    list1.unique();

    for (auto y:list1)
    {
        cout << y<<endl;
    }
    

    return 0;
}