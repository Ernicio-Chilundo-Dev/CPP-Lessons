#include <iostream>
#include <map>
using namespace std;

int main()
{

    //====================================MAP====================================================
    map<int, string> mp;
    map<int, string>::iterator it;

    // mp[0] = "Preto";
    // mp[1] = "Branco";
    // mp[2] = "Vermelho";
    // mp[3] = "Verde";
    // mp[4] = "Azul";

    // for (auto x : mp)
    // {
    //     cout << x.first << " - " << x.second << endl;
    // }

    // cout << endl;

    // for (it = mp.begin(); it != mp.end(); it++)
    // {
    //     cout << it->first << " - " << it->second << endl;
    // }

    // cout << endl;

    // //=====================================CAPACIDADE===================================================
    // map<char, int> mp1;

    // mp1['a'] = 10;
    // mp1['b'] = 20;
    // mp1['c'] = 30;
    // mp1['d'] = 40;
    // mp1['e'] = 50;

    // cout << mp1.size() << endl;
    // cout << mp1.max_size() << "\n\n";

    // //=============================ACESSO AOS ELEMENTOS================================================
    // map<char,int>mp2;

    // mp2['a']=10;
    // mp2['b']=20;
    // mp2['c']=30;
    // mp2['d']=40;
    // mp2['e']=50;

    // cout << mp2['a']<<" - "<<mp2['b']<<endl;
    // cout<< mp2.at('a')<<" - "<<mp2.at('b')<<"\n\n";

    // MODIFICADORES
    //  map<int,string>mp3;
    //  map<int,string>mp4;

    // mp3.insert(pair<int,string>(10,"Laranja"));
    // mp3.insert(pair<int,string>(20,"Abacaxi"));
    // mp3.insert(pair<int,string>(30,"Uva"));
    // mp3.insert(pair<int,string>(40,"Banana"));
    // mp3.insert(pair<int,string>(50,"Morango"));

    // it=mp3.find(30);
    // mp3.erase(it);

    // for (auto x:mp3)
    // {
    //     cout << x.first<<" - "<<x.second<<"\n";
    // }

    // cout << endl;

    // mp3.swap(mp4);
    // mp4.emplace_hint(mp4.end(),60,"Maca");

    // for (auto x:mp4)
    // {
    //     cout << x.first<<" - "<< x.second<<endl;
    // }

    // if(mp3.empty()){
    //     cout << "MAP 3 esta vazia!";
    // }else{
    //     cout << "MAP 3 contem valores"<<endl;
    // }

    // mp4.clear();
    // if(mp4.empty()){
    //     cout << "MAP 4 esta vazia!";
    // }else{
    //     cout << "MAP 4 contem valores!";
    // }

    // cout << endl;

    // OPERACOES

    map<int, char> mp5;
    map<int, char>::iterator it2;

    mp5[0] = 'a';
    mp5[1] = 'b';
    mp5[2] = 'c';
    mp5[3] = 'd';
    mp5[4] = 'e';

    it2 = mp5.find(4);
    cout << it2->first << " - " << it2->second << endl;

    if (mp5.count(2) != 0)
    {
        cout << "A chave 2 existe!" << endl;
    }

    it2 = mp5.lower_bound(3);
    mp5.erase(it2);

    for(auto y:mp5){
        cout << y.first<<" - "<< y.second<<endl;
    }

    cout << endl;

    return 0;
}