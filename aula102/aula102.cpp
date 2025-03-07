#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    pair<int,string>par;
    par= make_pair(24,"Ernicio");
    cout << par.first << " - "<<par.second<<endl;

    vector<int>vt={1,2,4,0,6,9};
    for(auto x:vt){
        cout << x<<"  ";
    }
    cout <<endl;

    double x = 20;
    cout << pow(x,2);

    cout <<endl;
    return 0;
}