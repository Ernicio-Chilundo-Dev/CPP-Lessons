#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> n{10, 20, 30, 40, 50, 60, 70, 80, 90};
    // for(vector<int>::iterator it=n.begin(); it!=n.end();it++){
    //     cout << *it<<"\n";
    // }

    // for(auto it=n.begin();it!=n.end();it++){
    //     cout <<*it <<endl;
    // }

    // for(auto x:n){
    //     cout <<x<<endl;
    // }

    // Conteudo da aula de hoje foreach

    // foreach que apresentar os elementos do vector n somados com o valor 10
    for_each(n.begin(), n.end(), [](int num)
             { num += 10;
                cout << num << endl; });

    cout << endl
         << endl;

    // foreach simples imprimido os elementos do vector
    for_each(n.begin(), n.end(), [](int num)
             { cout << num << "\n"; });
    return 0;
}