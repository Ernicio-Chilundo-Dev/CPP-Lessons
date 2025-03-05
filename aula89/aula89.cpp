#include <iostream>
#include <list>
using namespace std;

int main()
{

    // list<int>list1={3,5,7,8,9,0,4,3,5,6,0};

    // list1.sort();
    // list1.unique();

    // for (auto y:list1)
    // {
    //     cout << y<<endl;
    // }

    list<int> list1 = {0, 1, 2, 3, 4};
    list<int> list2 = {5, 6, 7, 8, 9};

    list1.merge(list2);
    list1.reverse();

    for (auto i : list1)
    {
        cout << i << endl;
    }

    return 0;
}