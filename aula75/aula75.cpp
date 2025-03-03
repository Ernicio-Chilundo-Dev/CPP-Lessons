#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    // int n = -10;
    // cout << abs(n)<<endl;

    int num,dem;
    div_t res;
    num = 10;
    dem = 3;

    res = div(num,dem);
    cout <<num<<" devidido por "<< dem <<" = "<< res.quot<< " e o resto da divisao e "<< res.rem<<endl;
    return 0;
}