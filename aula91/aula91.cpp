#include <iostream>
#include <map>
using namespace std;

int main(){

    map<int,string>mp;
    mp[0]="Preto";
    mp[1]="Branco";
    mp[2]="Vermelho";
    mp[3]="Verde";
    mp[4]="Azul";

    for (auto x:mp)
    {
        cout << x.first<<" - "<< x.second<<endl;
    }
    

    return 0;
}